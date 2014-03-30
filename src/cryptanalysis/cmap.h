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
   
   cmap(char str[50],int count)
   {
 	string s="./chromosomes/"+to_string(count)+".dat";// 	cout<<s;
	file = fopen (s.c_str(),"r");
//	file = fopen ("./chromosomes/1.dat","r");
	
	if(file==NULL)
	{cout<<"error\n"; exit(0);}

	file1.open("./data/cipher_list.dat");
    this->str=str;
    mapping();
    cout<<"\nOK......Mapping Performed\n";
    fclose(file);   
	file1.close();
   }
   
   void mapping();
   
   ~cmap()
   {
   }
};   	   

#endif
