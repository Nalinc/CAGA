#ifndef CMAP_H
#define CMAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


class cmap
{
//   ifstream file;
   FILE *file;
   ofstream file1;
   string str;
   
   public:
   cmap()
   {
   }
   
   cmap(char str[50],int gen)
   {
 	string s="./chromosomes/"+to_string(gen)+".dat";// 	cout<<s;
	file = fopen (s.c_str(),"r");
//	file = fopen ("./chromosomes/1.dat","r");
	
	if(file==NULL)
	{cout<<"error\n"; exit(0);}
	
    string s="./data/"+to_string(gen)+"_crypt.dat";
	file1.open(s.c_str());
    this->str=str;
    mapping();
    fclose(file);   
	file1.close();
   }
   
   void mapping();
   
   ~cmap()
   {
   }
};   	   

#endif
