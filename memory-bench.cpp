#include <random>
#include <chrono>
#include <iostream>
#include <cstdint>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cstring>

using namespace std;

using word = uint32_t;
constexpr static size_t wordcount = (1024*1024*1024);

int main() {
    vector<word> input;
    vector<word> output;
    using time = chrono::high_resolution_clock;
    auto time1 = time::now();
    input.resize(wordcount);
    std::cout << "Generating " << input.size() * sizeof(word) << " bytes" <<
        endl << flush;
    {
        ranlux48 engine;
        uniform_int_distribution<word> distribution(0, 10000000);
        for (auto a = input.begin(), e = input.end(); a != e; ++a) {
            *a = distribution(engine);
        }
        std::cout << "Reading took " << chrono::duration<double>(time::now() - time1).count()
            << " seconds" << endl << flush;
    }
    output.resize(input.size());
    memset(&output[0], 0, output.size() * sizeof(word));
    word const *src = &input[0];
    word *dst = &output[0];
    for (int i = 0; i != 10; ++i) {
        cout << "Begin iteration " << (i+1) << endl << flush;
        auto time2 = time::now();
        for (size_t i = 0; i != wordcount; ++i) {
            word w = src[i];
            if (w == 0) {
                w = 1;
            }
            dst[i] = w;
        }
        auto time3 = time::now();
        std::cout << "read/process/write " << (output.size() * sizeof(word)) / (1024*1024) <<
            " MB took " << chrono::duration<double>(time3 - time2).count() << " seconds" <<
            endl << flush;
    }
    return 0;
}

