#ifndef GA_H
#define GA_H

#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

class GA
{    
	 int i;
     string str;
     fstream fout;
public:
   GA()
   { str="abcdefghijklmnopqrstuvwxyz"; 
     fout.open("./chromosomes/1.dat",ios::out); 
     init();
     fout.close();
   }
   void init();
   ~GA()
   {
//	  fout.close(); 
   }
};

#endif
