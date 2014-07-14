filename="create_tier.c"
fname=${filename:0:-2}
cat $filename | grep z_null_iss > ${fname}_z_null_iss.c
cat $filename | grep z_null_int > ${fname}_z_null_int.c
cat $filename | grep z_rd_iss > ${fname}_z_rd_iss.c
cat $filename | grep z_rd_int > ${fname}_z_rd_int.c
cat $filename | grep 31848 > ${fname}_31848.c
cat $filename | grep 31851 > ${fname}_31851.c
cat $filename | grep 31852 > ${fname}_31852.c
cat $filename | grep z_wr_iss > ${fname}_z_wr_iss.c
cat $filename | grep z_wr_int > ${fname}_z_wr_int.c
cat $filename | grep z_fr_iss > ${fname}_z_fr_iss.c
cat $filename | grep z_ioctl_iss > ${fname}_z_ioctl_iss.c
cat $filename | grep z_ioctl_int > ${fname}_z_ioctl_int.c
cat $filename | grep txg_quience > ${fname}_txg_quiesce.c
cat $filename | grep txg_sync > ${fname}_txg_sync.c
cat $filename | grep zpool > ${fname}_zpool.c
cat $filename | grep vdev_open > ${fname}_vdev_open.c
