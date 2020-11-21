Simple benchmark to measure actual throughput of single core workloads.

Building:

    make

Running:

    make test


Example invocation (on Amazon c5n.metal instance):

    ./memory-bench

To run 10 of them in parallel (to measure multi-core performance):

    for i in 0 1 2 3 4 5 6 7 8 9; do ./memory-bench & done


Instance Type    1 core     16 cores
c5n.metal        5 GB/s     56 GB/s
c6g.metal        14.5 GB/s  118 GB/s

Measurement on single core on Amazon EC2 c5n.metal instance:

    25500: read/process/write 4096 MB took 0.74152 seconds

Measurement when running 16 of them in parallel:

    58608: read/process/write 4096 MB took 1.14072 seconds



Measurement on a single core on Amazon EC2 c6g.metal instance:

    17909: read/process/write 4096 MB took 0.274965 seconds

Measurement when running 16 of them in parallel:

    17999: read/process/write 4096 MB took 0.542598 seconds

