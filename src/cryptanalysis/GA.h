#ifndef GA_H
#define GA_H

#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
#include "cmap.h"

using namespace std;

class GA
{    
	 int i;
     string str;
     fstream fout;
public:
    static char opt[50];
    static char oct[50];

   GA()
   { 
	 str="abcdefghijklmnopqrstuvwxyz"; 
     init();
   }
   void init();
   int fitness(string);
   ~GA()
   {
//	  fout.close(); 
   }
};

#endif
