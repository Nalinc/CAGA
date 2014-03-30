#ifndef FITNESS_H
#define FITNESS_H
#include <iostream>
#include <string>
#include <cstdio>
#include <map>


using namespace std;
class FitN
{
FILE *f1,*f2,*f3;
char key[50];
int value;
public:
  map<string,int> uK,bK,tK;
  map<string,int> uD,bD,tD;  
  map<string,int>::iterator it1;
  map<string,int>::iterator it2;  	
  
  int ufitness(string);
  int bfitness(string);
  int tfitness(string);
  void init();
//  fitness=x*ufitness("filename")+y*bfitness("filename")+z*tfitness("filename");
};



#endif
