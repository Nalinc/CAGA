#include "fitness.h"
using namespace std;
void FitN::init()
{
	f1=fopen("./frequencyanalysis/uni/file.dat","r");	
	f2=fopen("./frequencyanalysis/bi/file.dat","r");
	f3=fopen("./frequencyanalysis/tri/file.dat","r");	

    while(fscanf(f1,"%s%d*c",key,&value)!=EOF)
       uK.insert( std::pair<string,int>(key,value));
	   
    while(fscanf(f2,"%s%d*c",key,&value)!=EOF)
       bK.insert( std::pair<string,int>(key,value));
		
    while(fscanf(f3,"%s%d*c",key,&value)!=EOF)
       tK.insert( std::pair<string,int>(key,value));
	
   fclose(f1);
   fclose(f2);
   fclose(f3);      
}
int FitN::ufitness(string file)
{
	uD.clear();
	int score=0;
	f1=fopen(file.c_str(),"r");	

    while(fscanf(f1,"%s%d*c",key,&value)!=EOF)
       uD.insert( std::pair<string,int>(key,value));
    fclose(f1);

        for (it2=uD.begin(); it2!=uD.end(); ++it2) 
		{    if(uK.count(it2->first)>0) 
		      {if(uK[it2->first]==it2->second)
		            score+=it2->second;
		       else ++score; }
	     }
	     
	return score;
}
int FitN::bfitness(string file)
{   bD.clear();
	int score=0;
	f2=fopen(file.c_str(),"r");
	   
    while(fscanf(f2,"%s%d*c",key,&value)!=EOF)
       bD.insert( std::pair<string,int>(key,value));

   fclose(f2);

        for (it2=bD.begin(); it2!=bD.end(); ++it2) 
		{    if(bK.count(it2->first)>0) 
		      { if(bK[it2->first]==it2->second)
		            score+=it2->second;
		       else ++score;  }
	     }
	
	return score;
}
int FitN::tfitness(string file)
{	tD.clear();
	int score=0;
	f3=fopen(file.c_str(),"r");	
		
    while(fscanf(f3,"%s%d*c",key,&value)!=EOF)
       tD.insert( std::pair<string,int>(key,value));	
   fclose(f1);

        for (it2=tD.begin(); it2!=tD.end(); ++it2) 
		{    if(tK.count(it2->first)>0) 
		      { if(tK[it2->first]==it2->second)
		            score+=it2->second;
		       else ++score;  }
	     }
			
	
	return score;
}



/*
int main()
{
	FitN o;
	o.init();
	string p1,p2,p3;
	int gen=1;
	
	for(int i=0;i<20;i++)
	{
  	  p1="../../frequencyanalysis/uni/"+to_string(gen)+".dat";
	  p2="../../frequencyanalysis/bi/"+to_string(gen)+".dat";
	  p3="../../frequencyanalysis/tri/"+to_string(gen)+".dat";
	
	double u=o.ufitness(p1)*0.1;
	double b=o.bfitness(p2)*0.3;
	double t=o.tfitness(p3)*0.6;
	cout<<u<<"\t"<<b<<"\t"<<t<<endl;	
	++gen;
     }
     
//     cout<<endl<<o.ufitness("../../frequencyanalysis/uni/5.dat");
      
}
*/
