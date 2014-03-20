#ifndef AFFINE_H
#define AFFINE_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Affine
{
private:
   int a,b,y,z;
   char temp1,temp2;
   string ciphertext;
   char ch1, ch2;
   fstream fout;
public:
   Affine()
   { a=5;b=8;
     ciphertext="";
     fout.open("../../TrainingData/TSet.dat",ios::out|ios::app); 
    }
   ~Affine()
   {
     fout.close();
    }
   void cipher(string text);
   char encrypt(char c);
   char decrypt(char c);

};



#endif
