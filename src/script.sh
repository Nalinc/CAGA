#!/bin/sh

echo ""  > fitness.dat
i=1
for f in `ls -v ../chromosomes/*.dat`
do 
 #echo $i
 awk -v c=$i -F'\t' '{sum+=$2} END { print c "\t" sum/NR >> "fitness.dat" }' < ../chromosomes/$f
 
 i=$((i+1)) 
done





