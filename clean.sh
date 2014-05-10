if [ -f ./data/* ]; 
then 
  rm ./data/*
else
  echo "Removing Files"; 
fi

if [ -f ./chromosomes/*.dat ]; 
then 
  rm ./chromosomes/*.dat
else
  echo "Removing Files";
fi

if [ -f ./chromosomes/.*.dat ]; 
then 
  rm ./chromosomes/.*.dat
else
  echo "Removing Files";
fi

if [ -f ./frequencyanalysis/uni/* ]; 
then 
  rm ./frequencyanalysis/uni/*
else
  echo "Removing Files";
fi

if [ -f  ./frequencyanalysis/bi/* ]; 
then 
  rm ./frequencyanalysis/bi/*
else
  echo "Removing Files";
fi

if [ -f   ./frequencyanalysis/tri/* ]; 
then 
  rm ./frequencyanalysis/tri/*
else
  echo "Removing Files";
fi

if [ -f ./frequencyanalysis/*.png ];
then
  rm ./frequencyanalysis/*.png
else
  echo "Removing Files";
fi




