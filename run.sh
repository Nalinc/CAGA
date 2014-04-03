if [ "$1" == "" ];
then
     ./bin/main

elif [ "$1" == "-GUI" ];
then
    ../CGA-build-desktop-Desktop_Qt_4_8_1_for_GCC__Qt_SDK__Release/CGA

elif [ "$1" == "-f" ];
then 
     echo "not functional atm" #./bin/ca

elif [ "$1" == "-t" ];
then
     ./bin/main -t
    
elif [ "$1" == "-help" ];
then 
    echo -e "\n#CheatSheet"
        echo -e "#Cryptanalysis of Substitution Ciphers using Genetic Algorithms\n"
	echo "#COMMAND LINE USAGE:"
	echo -e "\t ./run.sh\t\t\t\t:Enables CLI(default) Mode"	
        echo -e "\t ./run.sh -GUI\t\t\t\t:Enables GUI Mode(currently non-operational)"
	echo -e "\t ./run.sh -help\t\t\t\t:Displays usage/help section"
	echo -e "\t ./run.sh -t\t\t\t\t:Generate training data"
	echo -e "\t ./run.sh -f <text> <filename>\t\t:Perform Frequency Analysis"

else
  echo "err..invalid usage"

fi
