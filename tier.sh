trace-cmd record -p function_graph -O nosleep-time -O nofuncgraph-overhead -O graph-time  -l :mod:zfs zpool create  tank tier sdg sdc

#trace-cmd report
