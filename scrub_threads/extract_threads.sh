filename="scrub_trace.c"
fname=${filename:0:-2}
cat $filename | grep z_null_iss > ${fname}_z_null_iss.c
