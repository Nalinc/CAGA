
if [ "$(ls -A ./data/)" ]; 
then 
  rm ./data/* 
else
    echo "Directory Clean...Safe to preoceed"
fi

if [ "$(ls -A ./chromosomes/)" ]; 
then 
  rm ./chromosomes/*.dat
else
    echo "Directory Clean...Safe to preoceed"
fi

if [ "$(ls -A ./chromosomes/)" ]; 
then 
  rm ./chromosomes/.*.dat
else
    echo "Directory Clean...Safe to preoceed"
fi

if [ "$(ls -A ./frequencyanalysis/uni/)" ]; 
then 
  rm ./frequencyanalysis/uni/*.dat
else
    echo "Directory Clean...Safe to preoceed"
fi

if [ "$(ls -A ./frequencyanalysis/bi/)" ]; 
then 
  rm ./frequencyanalysis/bi/*.dat
else
    echo "Directory Clean...Safe to preoceed"
fi

if [ "$(ls -A ./frequencyanalysis/tri/)" ]; 
then 
  rm ./frequencyanalysis/tri/*.dat
else
    echo "Directory Clean...Safe to preoceed"
fi

shopt -s nullglob
FILES=`echo ./frequencyanalysis/*.png`
if [[ -z $FILES ]]; 
then 
    echo "Directory Clean...Safe to preoceed"
else
	for i in $FILES; do
		rm $i
	done

fi


