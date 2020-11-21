Simple benchmark to measure actual throughput of single core workloads.

Building:

    make

Running:

    make test


Example invocation (on Amazon c5n.metal instance):

    ./memory-bench

To run 10 of them in parallel (to measure multi-core performance):

    for i in 0 1 2 3 4 5 6 7 8 9; do ./memory-bench & done

Measurement on single core on Amazon EC2 c5n instance:

    25500: read/process/write 4096 MB took 0.74152 seconds

Per-core: 5 GB/s

Measurement when running 16 of them in parallel:

    58608: read/process/write 4096 MB took 1.14072 seconds

Overall: 56 GB/s

