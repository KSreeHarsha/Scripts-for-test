if [ $# -eq 0 ]; then
    echo "arguments provided to rename"
    exit 1
fi
trace-cmd report > trace_$1.c
mv trace.dat trace_$1.dat
