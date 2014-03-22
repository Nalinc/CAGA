if [ "$1" == "" ];
then
	echo "chgeck usage: ./run.sh -help"

elif [ "$1" == "-train" ];
then
     ./bin/cs

elif [ "$1" == "-init" ];#; -a "$2" == "rossler" ];
then 
    ./bin/ca
    
elif [ "$1" == "-help" ];
then 
    echo -e "\n#CheatSheet"
        echo -e "#Cryptanalysis of Substitution Ciphers using Genetic Algorithms\n"
	echo "#COMMAND LINE USAGE:"
	echo -e "\t ./run.sh -GUI\t\t\t\t:Enables GUI Mode(currently non-operational)"
	echo -e "\t ./run.sh -CLI\t\t\t\t:Enables CLI Mode & Genetares Training Data(default)"	
	echo -e "\t ./run.sh -help\t\t\t\t:Displays usage/help section"
	echo -e "\t ./run.sh -train\t\t\t:Forks the module that generates training data"
	echo -e "\t ./run.sh -init \t\t\t:Initialise the cryptanalysis module"

else
  echo "err..invalid usage"

fi
