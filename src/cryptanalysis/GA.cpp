#include "GA.h"

void GA::init()
{
	for(i=0;i<20;i++)
	{
	   srand(time(0));
       random_shuffle(str.begin(), str.end());
       fout<<str<<"\n";
	}
}


int main()
{
	GA a;
	a.init();
}
