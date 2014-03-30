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
   cout<<"\nOK......Mapping Performed\n";

//FREQUENCY ANALYSIS
calcfreq(1);

//CALCULATE FITTNESS
fitn();

}
void GA::calcfreq(int gen)
{
	count=1;
	s="./data/"+to_string(gen)+"_crypt.dat";// 	cout<<s;
	file = fopen (s.c_str(),"r");

    while(fscanf(file,"%s*c",tmp)!=EOF)
    {
	  f=to_string(count++)+".dat";
      fanalysis obj(tmp,f); 
	}
}

void GA::fitn()
{
	o.init();
	string p1,p2,p3;
	int gen=1;
	
	for(int i=0;i<20;i++)
	{
  	  p1="./frequencyanalysis/uni/"+to_string(gen)+".dat";
	  p2="./frequencyanalysis/bi/"+to_string(gen)+".dat";
	  p3="./frequencyanalysis/tri/"+to_string(gen)+".dat";
	
	double u=o.ufitness(p1)*0.1;
	double b=o.bfitness(p2)*0.3;
	double t=o.tfitness(p3)*0.6;
	cout<<"\t\t"<<u<<"\t"<<b<<"\t"<<t<<endl;	
	++gen;
     }
}

/*
int main()
{
	GA ga;
	ga.init();
}
*/
