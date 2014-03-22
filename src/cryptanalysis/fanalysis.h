#ifndef FANALYSIS_H
#define FANALYSIS_H
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
class fanalysis
{
fstream f1,f2,f3;
//int n;
unsigned int i;
string s;
map<string,int> unigrams,bigrams,trigrams;
map<string,int>::iterator it;
	
public:
    void unigram(fstream &f1);
    void bigram();//fstream &f2);
    void trigram();//fstream &f3);
    
    fanalysis()
    {
//           f1.open("../../frequencyanalysis/uni/training.dat",ios::out);
//		   f2.open("../../frequencyanalysis/bi/training.dat",ios::out);
//		   f3.open("../../frequencyanalysis/tri/training.dat",ios::out);
      //     f1.open("uni.dat",ios::out);
		   //f2.open("bi.dat",ios::out);
		   //f3.open("tri.dat",ios::out);

	
	}
	fanalysis(char *s)//,int n)
	{   //this->n=n;
	    this->s="hello";//(string)s;
	    fanalysis();
//	    else
        cout<<this->s<<endl; 
	    f1.open("uni.dat",ios::out);
	 //   f1<<"Bla blaaa"<<endl;
	  //  unigram(f1);
	  //  bigram();
	    trigram();
	    //bigram(f2);
	    //trigram(f3);  
	}	
	~fanalysis()
	{
	   f1.close();	
	}
};

#endif
