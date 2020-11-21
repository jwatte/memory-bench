build:	memory-bench
test:	memory-bench
	./memory-bench
memory-bench:	memory-bench.cpp
	g++ -std=gnu++17 -O3 -pipe -o memory-bench memory-bench.cpp
clean:
	rm -f memory-bench *.o a.out core *~
