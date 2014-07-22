trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd if=/dev/zero of=/tank/testfile bs=1K count=10 oflag=dsync

#trace-cmd report
