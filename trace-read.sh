trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs dd of=/dev/null if=/HP/testfile bs=1K

trace-cmd report
