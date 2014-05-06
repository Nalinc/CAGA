./clean.sh
echo -e "========Fetching system information========"
   uname -a
echo -e "......................................................OK"
echo -e "\n===========Checking dependencies==========="
   g++ --version | head -1
echo -e "......................................................OK"
echo -e "\n=========Checking necessary files=========="
if [ -d ./bin ];
then 
     echo "./bin already in place................................OK"
else 
     echo "creating ./bin folder  ...............................OK"
     mkdir bin;
fi
if [ -d ./chromosomes ];
then 
     echo "./chromosomes already in place........................OK"
else 
     echo "creating ./chromosomes folder  .......................OK"
     mkdir chromosomes;
fi
if [ -d ./data ];
then 
     echo "./data already in place...............................OK"
else 
     echo "creating ./data folder  ..............................OK"
     mkdir data;
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
  g++ -time -std=c++0x ./src/cryptosystem/*.cpp ./src/cryptanalysis/*.cpp ./src/main.cpp -o ./bin/main 
echo -e "......................................................OK"
