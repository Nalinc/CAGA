#include "GA.h"

void GA::init()
{
	
    fout.open("./chromosomes/1.dat",ios::out); 
    cout<<"\n\t[Generating Initial Chromosome Population]\n";
	for(i=0;i<20;i++)
	{
	   srand(time(0));
       random_shuffle(str.begin(), str.end());
       fout<<str<<"\n";
       cout<<"\t\t"<<str<<"\n";
	}
       cout<<"OK......Initial Chromosome Pool Populated\n";
     fout.close();

//CMAP
   cout<<"\n========Encrypting Data Using Chromosome Pool=======";
	cmap cm(GA::opt,1);

//FREQUENCY ANALYSIS


//CALCULATE FITTNESS


}
/*
int main()
{
	GA ga;
	ga.init();
}
*/
