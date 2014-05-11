#"$(ls -A $DIR)"
if [ "$(ls -A ./data/)" ]; 
then 
  rm ./data/* 
else
  echo "Removing Files"
fi

if [ "$(ls -A ./chromosomes/)" ]; 
then 
  rm ./chromosomes/*.dat
else
  echo "Removing Files"
fi

if [ "$(ls -A ./chromosomes/)" ]; 
then 
  rm ./chromosomes/.*.dat
else
  echo "Removing Files"
fi

if [ "$(ls -A ./frequencyanalysis/uni/)" ]; 
then 
  rm ./frequencyanalysis/uni/*.dat
else
  echo "Removing Files"
fi

if [ "$(ls -A ./frequencyanalysis/bi/)" ]; 
then 
  rm ./frequencyanalysis/bi/*.dat
else
  echo "Removing Files"
fi

if [ "$(ls -A ./frequencyanalysis/tri/)" ]; 
then 
  rm ./frequencyanalysis/tri/*.dat
else
  echo "Removing Files"
fi

if [ -f ./frequencyanalysis/*.png ];
then
  rm ./frequencyanalysis/*.png
else
  echo "Removing Files"
fi
