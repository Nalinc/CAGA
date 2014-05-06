#!/bin/sh

if [ -f ./src/fitness.dat ];
then
  rm ./src/fitness.dat
fi

i=1
for f in `ls -v ./chromosomes/*.dat`
do 
 #echo $i
 awk -v c=$i -F '\t' 'NR<5 {sum+=$2} END { print c "\t" sum/4 >> "./src/fitness.dat" } ' < $f
 #awk  -v c=$i -F '\t' '{sum+=$2} END { print c "\t" sum/NR >> "./src/fitness.dat" }' < $f
 
 i=$((i+1)) 
done





