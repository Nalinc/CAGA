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
string s,str;
map<string,int> unigrams,bigrams,trigrams;
map<string,int>::iterator it;
	
public:
    void unigram(fstream &f1);
    void bigram(fstream &f2);
    void trigram(fstream &f3);
    
    fanalysis()
    {
	}
	fanalysis(char *s,string f)
	{   //this->n=n;
	    this->s=(string)s;
	    fanalysis();
        str="./frequencyanalysis/uni/"+(string)f;
	    f1.open(str.c_str(),ios::out);
        str="./frequencyanalysis/bi/"+(string)f;
        f2.open(str.c_str(),ios::out);
        str="./frequencyanalysis/tri/"+(string)f;
		f3.open(str.c_str(),ios::out);

	    unigram(f1);
	    bigram(f2);
	    trigram(f3);
	}	
	~fanalysis()
	{
	   f1.close();	
	   f2.close();	
	   f3.close();	
	}
};

#endif
