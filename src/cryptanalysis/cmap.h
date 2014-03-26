#ifndef CMAP_H
#define CMAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
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
   
   cmap(char str[50])
   {
	file = fopen ("./Chromosomes/gen.dat","r");
	if(file==NULL)
	{cout<<"error"; exit(0);}
	
	file1.open("./Chromosomes/cipher_list.dat");
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
