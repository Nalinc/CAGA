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
        echo -e "#\n"
	echo "#COMMAND LINE USAGE:"
	echo -e "\t ./run.sh -GUI\t\t\t\t:Enables GUI Mode"
	echo -e "\t ./run.sh -CLI\t\t\t\t:Enables CLI Mode & encrypts text(by default)"	
	echo -e "\t ./run.sh -help\t\t\t\t:Displays usage/help section"
	echo -e "\t ./run.sh -sync\t\t\t\t:(Re)Synchronizes chaotic systems"
	echo -e "\t ./run.sh -p chaos\t\t\t:Plots Chaotic Maps"
	echo -e "\n\t ./run.sh -et <filename>\t\t:Encrypts Text as given in <filename>"echo -e "\t ./run.sh -ei <filename>\t\t:Encrypts Image named <filename>"
   	echo -e "\t ./run.sh -e[a|v] <filename>\t\t:Encrypts audio/video named <filename>"
	echo -e "\n\t ./run.sh -dt <filename>\t\t:Decrypts Text as given in <filename>"
	echo -e "\t ./run.sh -di <filename>\t\t:Decrypts Image named <filename>"	   
	echo -e "\t ./run.sh -d[a|v] <filename>\t\t:Decrypts audio/video named <filename>"
        echo -e "\n\t ./run.sh -show <filename>\t\t:Displays the binary of original text"
        echo -e "\t ./run.sh -showe <filename> \t\t:Displays Encrypted text in <filename>"
        echo -e "\t ./run.sh -showbe <filename> \t\t:Displays Binary of Encrypted text in <filename>"
        echo -e "\t ./run.sh -showd <filename> \t\t:Displays Decrypted text in <filename>"
        echo -e "\t ./run.sh -showbd <filename> \t\t:Displays Binary of Decrypted text in <filename>"
else
  echo "err..invalid usage"

fi
