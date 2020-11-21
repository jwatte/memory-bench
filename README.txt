Simple benchmark to measure actual throughput of single core workloads.

Building:

    make

Running:

    make test


Example invocation (on Amazon c5n.metal instance):

./memory-bench
Generating 4294967296 bytes
Reading took 175.104 seconds
Begin iteration 1
read/process/write 4096 MB took 0.758713 seconds
Begin iteration 2
read/process/write 4096 MB took 0.758398 seconds
Begin iteration 3
read/process/write 4096 MB took 0.758777 seconds
Begin iteration 4
read/process/write 4096 MB took 0.758281 seconds
Begin iteration 5
read/process/write 4096 MB took 0.758218 seconds
Begin iteration 6
read/process/write 4096 MB took 0.758243 seconds
Begin iteration 7
read/process/write 4096 MB took 0.758347 seconds
Begin iteration 8
read/process/write 4096 MB took 0.758029 seconds
Begin iteration 9
read/process/write 4096 MB took 0.758428 seconds
Begin iteration 10
read/process/write 4096 MB took 0.758353 seconds

