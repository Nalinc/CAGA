#include "GA.h"
void GA::crossover(int gen)
{
  //   for(int k=0;k<4;k++)
    //   cout<<ff[k]<<endl;

    string s2,str0,str1,str2,str3;
    s2="./chromosomes/."+to_string(gen)+".dat";
    fout.open(s2.c_str(),ios::out); 

    fout<<ff[0]<<"\n";
    fout<<ff[1]<<"\n";
    fout<<ff[2]<<"\n";
    fout<<ff[3]<<"\n";
    str0=ff[0];//"abcdefghijklmnopqrstuvwxyz"; 
	for(i=0;i<4;i++)
	{  	
	   srand(time(0));
       random_shuffle(str0.begin(), str0.end());
       fout<<str0<<"\n";
	}

    str1=ff[1];
	for(i=0;i<4;i++)
	{  	
	   srand(time(0));
       random_shuffle(str1.begin(), str1.end());
       fout<<str1<<"\n";
	}
	str2=ff[2];
	for(i=0;i<4;i++)
	{  	
	   srand(time(0));
       random_shuffle(str2.begin(), str2.end());
       fout<<str2<<"\n";
	}
	str3=ff[3];
	for(i=0;i<4;i++)
	{  	
	   srand(time(0));
       random_shuffle(str3.begin(), str3.end());
       fout<<str3<<"\n";
	}

    fout.close();


//CMAP
	 cmap cm(GA::opt,gen);
//FREQUENCY ANALYSIS
     calcfreq(gen);
//CALCULATE FITTNESS
     fitn(gen);
}

void GA::init()
{
	
    fout.open("./chromosomes/.1.dat",ios::out); 
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
   cout<<"\n=================N-Gram Statistics==================\n";
calcfreq(1);
   cout<<"\nOK......Statistical Analysis Performed\n";
//CALCULATE FITTNESS
   cout<<"\n=========Evaluating Fitness of Chromosomes==========\n";
fitn(1);//1->for 1st generation

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
	fclose(file);
}

void GA::fitn(int gen)
{
	o.init();
	string p1,p2,p3,s1,s2,str[20],cmd;
	char t[50];
	s1="./chromosomes/."+to_string(gen)+".dat";
	file=fopen(s1.c_str(),"r");

   cout<<"#Generation: "<<gen<<endl;	
	
	int c=0;
	while(fscanf(file,"%s*c",t)!=EOF)
	{str[c]=t;c++;}
//	for(int i=0;i<20;i++)
	// cout<<str[i]<<endl;
	
	s2="./chromosomes/"+to_string(gen)+".dat";
	fout.open(s2.c_str(),ios::out);
    
   	int chromo=1;
	for(int i=0;i<20;i++)
	{
  	  p1="./frequencyanalysis/uni/"+to_string(chromo)+".dat";
	  p2="./frequencyanalysis/bi/"+to_string(chromo)+".dat";
	  p3="./frequencyanalysis/tri/"+to_string(chromo)+".dat";
	
	double u=o.ufitness(p1)*0.1;
	double b=o.bfitness(p2)*0.3;
	double t=o.tfitness(p3)*0.6;
//         cout<<"\t\t"<<u<<"\t"<<b<<"\t"<<t<<endl;
	fout<<str[i]<<"\t"<<(u+b+t)<<"\n";
	++chromo;
     }
     fout.close();
     fclose(file);
     cmd="sort -rk 2 ./chromosomes/"+to_string(gen)+".dat -o ./chromosomes/"+to_string(gen)+".dat";
     system(cmd.c_str()); 
}




/*
int main()
{
	GA ga;
	ga.init();
}
*/
