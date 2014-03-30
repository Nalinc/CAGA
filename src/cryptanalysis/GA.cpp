#include "GA.h"

void GA::init()
{
    cout<<"\n\t[Generating Initial Chromosome Population]\n";
	for(i=0;i<20;i++)
	{
	   srand(time(0));
       random_shuffle(str.begin(), str.end());
       fout<<str<<"\n";
       cout<<"\t\t"<<str<<"\n";
	}
       cout<<"OK......Initial Chromosome Pool Populated\n";

}
/*
int main()
{
	GA ga;
	ga.init();
}
*/
