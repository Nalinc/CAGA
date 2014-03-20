#include "GA.h"

void GA::init()
{
      cout<<"\nGenerating Initial Chromosome Population(20 Nos)\n";
	for(i=0;i<20;i++)
	{
	   srand(time(0));
           random_shuffle(str.begin(), str.end());
           fout<<str<<"\n";
	}
       cout<<"Done!\n";
}


int main()
{
	GA a;
	a.init();
}
