#ifndef GA_H
#define GA_H

#include <string>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "cmap.h"
#include "fanalysis.h"
#include "fitness.h"

using namespace std;

class GA
{    
	 int i,count;
     string str,s,f;
     string ff[4],chromos[20];
     fstream fout;
     FILE *file;
     char tmp[50],tmp2[50];
     FitN o;
public:
    static char opt[50];
    static char oct[50];

   GA()
   { 
	 str="abcdefghijklmnopqrstuvwxyz"; 
     init();
   }
   GA(int gen)
   {
       //open gen-1 file
	   string s1;
	   s1="./chromosomes/"+to_string(gen-1)+".dat";
	   file= fopen(s1.c_str(),"r");
       if(file==NULL)
       {cout<<"error\n";exit(0);}
       //read and get fittest 4
       int j=0;
       while(fscanf(file,"%s%s*c",tmp,tmp2)!=EOF)
       { ff[j]=tmp;++j;
         if(j==4) break;         
       }
       //close file
       fclose(file);

       //call crossover()
       crossover(gen);
   }
   void init();
   void crossover(int gen);
   void fitn(int gen);
   void calcfreq(int gen);
   ~GA()
   {
//	  fout.close(); 
   }
};

#endif
