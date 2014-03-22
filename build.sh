echo -e "\n==========checking dependencies=========="
   g++ --version
echo -e "......................................................OK"
echo -e "========fetching system information========"
   uname -a
echo -e "......................................................OK"
echo -e "=========Checking necessary files=========="
if [ -d ./bin ];
then 
     echo "./bin already in place................................OK"
else 
     echo "creating ./bin folder  ...............................OK"
     mkdir bin;
fi
if [ -d ./Chromosomes ];
then 
     echo "./Chromosomes already in place........................OK"
else 
     echo "creating ./Chromosomes folder  .......................OK"
     mkdir Chromosomes;
fi
if [ -d ./TrainingData ];
then 
     echo "./TrainingData already in place.......................OK"
else 
     echo "creating ./TrainingData folder  ......................OK"
     mkdir TrainingData;
fi
if [ -d ./src ];
then 
     echo "./src already in place................................OK"
else 
     echo "error in project structure...............Status: FAIL"
fi
if [ -d ./frequencyanalysis ];
then 
     echo "./frequencyanalysis already in place..................OK"
else 
     echo "creating ./frequencyanalysis folder  .................OK"
     mkdir frequencyanalysis;

fi
echo -e "===========compiling cryptosystem=========="
#  g++ -time -c ./src/cryptosystem/*.cpp -o ./src/cs.o
# g++ -c ./src/cryptanalysis/*.cpp -o ./src/ca.o
  g++ ./src/cryptosystem/*.cpp ./src/cryptanalysis/*.cpp ./src/main.cpp -o ./bin/main 
echo -e "......................................................OK"
