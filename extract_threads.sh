filename="scrub_tier.c"

cat $filename |awk '{print $1}' | sort -u

fname=${filename:0:-2}

mkdir $fname
cat $filename |awk '{gsub("/","",$1); print $1}' | sort -u > ${fname}/threads.c


while read line; do cat $filename | grep $line > ${fname}/$line ; done < $fname/threads.c



