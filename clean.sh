
if [ ! -z "ls ./data/*" ]; 
then echo "Directory Already Empty"; 
else
rm ./data/*
fi

if [ ! -z "ls ./chromosomes/*.dat" ]; 
then echo "Directory Already Empty";
else
rm ./chromosomes/*.dat
fi

if [ ! -z "ls ./chromosomes/.*.dat" ]; 
then echo "Directory Already Empty";
else
rm ./chromosomes/.*.dat
fi

if [ ! -z "ls ./frequencyanalysis/uni/*" ]; 
then echo "Directory Already Empty";
else
rm ./frequencyanalysis/uni/*
fi

if [ ! -z "ls ./frequencyanalysis/bi/*" ]; 
then echo "Directory Already Empty";
else
rm ./frequencyanalysis/bi/*
fi

if [ ! -z "ls ./frequencyanalysis/tri/*" ]; 
then echo "Directory Already Empty";
else
rm ./frequencyanalysis/tri/*
fi







