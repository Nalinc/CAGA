#!/bin/sh

#rm ./src/fitness.dat
i=1
for f in `ls -v ../chromosomes/*.dat`
do 
 #echo $i
 awk -v c=$i -F '\t' 'NR<5 {sum+=$2} END { print c "\t" sum/4 >> "fitness.dat" } ' < $f
 #awk 'NR=2 {sum+=$2} END {print sum }' < $f
 #awk -v c=$i -F '\t' '{sum+=$2} END { print c "\t" sum/NR >> "./src/fitness.dat" }' < $f
 
 i=$((i+1)) 
done





