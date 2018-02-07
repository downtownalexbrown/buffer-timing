# buffer-timing

Intresting project to compare read/write times with different buffers. Output is posted below:

[alex@archlinux apue-misc-code]$ du -sh shakespeare.txt 
63M	shakespeare.txt
[alex@archlinux apue-misc-code]$ ./main
1 bytes took 3.333120 seconds
2 bytes took 1.659500 seconds
4 bytes took 0.872533 seconds
8 bytes took 0.464604 seconds
16 bytes took 0.266851 seconds
32 bytes took 0.170193 seconds
64 bytes took 0.122985 seconds
128 bytes took 0.103764 seconds
256 bytes took 0.088682 seconds
512 bytes took 0.083844 seconds
1024 bytes took 0.082296 seconds
2048 bytes took 0.078554 seconds
4096 bytes took 0.074603 seconds
8192 bytes took 0.070407 seconds
16384 bytes took 0.061977 seconds
32768 bytes took 0.057409 seconds
65536 bytes took 0.055364 seconds
131072 bytes took 0.056581 seconds
262144 bytes took 0.056877 seconds
524288 bytes took 0.057437 seconds
1048576 bytes took 0.058561 seconds
2097152 bytes took 0.062758 seconds
4194304 bytes took 0.066084 seconds
8388608 bytes took 0.061798 seconds
16777216 bytes took 0.055863 seconds
33554432 bytes took 0.045644 seconds

