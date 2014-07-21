

if [ $# -eq 0 ]; then
    echo "Provide filename to extract"
    exit 1
fi


filename=$1
echo $filename

fname="${filename/".c"/}"

mkdir $fname
cat $filename |awk '{gsub("/","\\/",$1); print $1}' | sort -u > ${fname}/threads.c


while read line; do cat $filename | grep $line > ${fname}/${line/"/"/} ; done < $fname/threads.c

rm $fname/cpus\=12 
rm $fname/version

