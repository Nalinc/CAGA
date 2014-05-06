
if [ ! -f ./data/* ]; 
then 
  echo "Removing Files"; 
else
  rm ./data/*
fi

if [ ! -f ./chromosomes/*.dat ]; 
then 
  echo "Removing Files";
else
  rm ./chromosomes/*.dat
fi

if [ ! -f ./chromosomes/.*.dat ]; 
then 
  echo "Removing Files";
else
  rm ./chromosomes/.*.dat
fi

if [ ! -f ./frequencyanalysis/uni/* ]; 
then echo "Removing Files";
else
  rm ./frequencyanalysis/uni/*
fi

if [ ! -f  ./frequencyanalysis/bi/* ]; 
then 
  echo "Removing Files";
else
  rm ./frequencyanalysis/bi/*
fi

if [ ! -f   ./frequencyanalysis/tri/* ]; 
then 
  echo "Removing Files";
else
  rm ./frequencyanalysis/tri/*
fi

if [ ! -f ./frequencyanalysis/*.png ];
then
   echo "Removing Files"
else
  rm ./frequencyanalysis/*.png
fi




