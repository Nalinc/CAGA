#ifndef GA_H
#define GA_H

#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
#include "cmap.h"
#include "fanalysis.h"
#include "fitness.h"

using namespace std;

class GA
{    
	 int i,count;
     string str,s,f;
     fstream fout;
     FILE *file;
     char tmp[50];
     FitN o;
public:
    static char opt[50];
    static char oct[50];

   GA()
   { 
	 str="abcdefghijklmnopqrstuvwxyz"; 
     init();
   }
//   GA()
  // {

   //}
   void init();
   void fitn(int gen);
   void calcfreq(int gen);
   ~GA()
   {
//	  fout.close(); 
   }
};

#endif
