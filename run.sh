if [ "$1" == "-CLI" ];
then
     ./bin/main

elif [ "$1" == "-GUI" ];
then
    ./CGA-build-desktop-Desktop_Qt_4_8_1_for_GCC__Qt_SDK__Release/CGA

elif [ "$1" == "-f" ];
then 
     ./bin/main -f $2 $3

elif [ "$1" == "-t" ];
then
     ./bin/main -t

elif [ "$1" == "-p" ];
then
     
     gnuplot ./GNUPlot/fitp.gpl < ./chromosomes/$2
     gnuplot ./GNUPlot/up.gpl   < ./frequencyanalysis/uni/$2
     gnuplot ./GNUPlot/bp.gpl   < ./frequencyanalysis/bi/$2
     gnuplot ./GNUPlot/tp.gpl   < ./frequencyanalysis/tri/$2
     #eog fitness_plot.png
    
elif [ "$1" == "-help" -o $1="" ];
then 
    echo -e "\n#CheatSheet"
    echo -e "#Cryptanalysis of Substitution Ciphers using Genetic Algorithms\n"
	echo "#COMMAND LINE USAGE:"
	echo -e "\t ./run.sh \t\t\t\t:Displays usage/help section"
	echo -e "\t ./run.sh -CLI\t\t\t\t:Enables CLI Mode"	
    echo -e "\t ./run.sh -GUI\t\t\t\t:Enables GUI Mode"
	echo -e "\t ./run.sh -t\t\t\t\t:Generate training data"
	echo -e "\t ./run.sh -f <text> <filename>\t\t:Perform Frequency Analysis"
	echo -e "\t\t\t\t\t\t Normal Usage <text>=TSet.dat && <filename>=file.dat"

else
  echo "err..invalid usage"

fi
