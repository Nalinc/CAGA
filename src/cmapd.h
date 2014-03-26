#ifndef CMAP_H
#define CMAP_H

#include <iostream>
#include <fstream>
#include <string>

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
   
   cmap(string str)
   {
	file = fopen ("../Chromosomes/gen.dat","r");
	file1.open("../Chromosomes/cipher_list.dat");
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
