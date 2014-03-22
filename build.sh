echo -e "========Fetching system information========"
   uname -a
echo -e "......................................................OK"
echo -e "\n===========Checking dependencies==========="
   g++ --version
echo -e "......................................................OK"
echo -e "\n=========Checking necessary files=========="
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
echo -e "\n=============Compiling project============="
  g++ -time ./src/cryptosystem/*.cpp ./src/cryptanalysis/*.cpp ./src/main.cpp -o ./bin/main 
echo -e "......................................................OK"
