
if [ ! -f ./data/* ]; 
then 
  echo "Directory Already Empty"; 
else
  rm ./data/*
fi

if [ ! -f ./chromosomes/*.dat ]; 
then 
  echo "Directory Already Empty";
else
  rm ./chromosomes/*.dat
fi

if [ ! -f ./chromosomes/.*.dat ]; 
then 
  echo "Directory Already Empty";
else
  rm ./chromosomes/.*.dat
fi

if [ ! -f ./frequencyanalysis/uni/* ]; 
then echo "Directory Already Empty";
else
  rm ./frequencyanalysis/uni/*
fi

if [ ! -f  ./frequencyanalysis/bi/* ]; 
then 
  echo "Directory Already Empty";
else
  rm ./frequencyanalysis/bi/*
fi

if [ ! -f   ./frequencyanalysis/tri/* ]; 
then 
  echo "Directory Already Empty";
else
rm ./frequencyanalysis/tri/*
fi







