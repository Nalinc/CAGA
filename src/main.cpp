#include "./cryptanalysis/GA.h"
//#include "./cryptanalysis/cmap.h"
#include "./cryptanalysis/fanalysis.h"
#include "./cryptosystem/affine.h"
#include <string.h>
using namespace std;

char GA::opt[50];
char GA::oct[50];

int main(int argc,char **argv)
{

//   if(argc==2 && strcmp(argv[1],"-t")==0)   
//    exit(0);

   if(argc!=1)   
   {
     if(argc==2 && strcmp(argv[1],"-t")==0)
     {
		cout<<"=====Generating Training Data from cryptosystem=====";
		string str;
		cout<<"\nenter a string: ";
		cin>>str;
		Affine a;
		a.cipher(str);
		cout<<"\n\nOK......Training set appended at:\n\t\"<project_root>/data/TSet.dat\" \n\n";
      } 

      if(argc==4 && strcmp(argv[1],"-f")==0)
      {
        if(strcmp(argv[2],"TSet.dat")==0) 
       	{ FILE *f;
      	  f = fopen ("./data/TSet.dat","r");
          while(fscanf(f,"%s%s*c",GA::opt,GA::oct)!=EOF);
	      fclose (f);	
	      fanalysis fa(GA::oct,"file.dat");
        }
      	else 
      	  fanalysis fa(argv[2],argv[3]);

		cout<<"\n\nOK......Frequency Analysis performed on given sample\n";
		cout<<"\tUnigrams->\"<project_root>/frequencyanalysis/uni/\"\n";
		cout<<"\tBiigrams->\"<project_root>/frequencyanalysis/bi/\"\n";
		cout<<"\tTrigrams->\"<project_root>/frequencyanalysis/tri/\"\n";
	  }
	  
     if(argc==2 && strcmp(argv[1],"-ga")==0)
     {   
 		 FILE *f;
         f = fopen ("./data/TSet.dat","r");
		 while(fscanf(f,"%s%s*c",GA::opt,GA::oct)!=EOF);
		 fclose (f);	
		 cout<<"\n==========Initializing Genetic Algorithms===========";
 	     GA ga;
		 for(int k=2;k<=100;k++)   
		   GA ga(k);  
      } 

	  
    }
   else
   {
	   
//fork affine cipher to generate training data
    cout<<"=====Generating Training Data from cryptosystem=====";
    string str;
    cout<<"\nenter a string: ";
    cin>>str;
    Affine a;
    a.cipher(str);
    cout<<"\n\nOK......Training set appended at:\n\t\"<project_root>/data/TSet.dat\" \n\n";

//frequency analysis
   cout<<"===========Performing Frequency Analysis============";
	FILE *f;
	f = fopen ("./data/TSet.dat","r");
	//fseek(f,-71,SEEK_END);
//    static char GA::opt[50];static char GA::oct[50];
    while(fscanf(f,"%s%s*c",GA::opt,GA::oct)!=EOF);
	fclose (f);	
	fanalysis fa(GA::oct,"file.dat");
    cout<<"\n\nOK......Frequency Analysis performed on given sample\n";
    cout<<"\tUnigrams->\"<project_root>/frequencyanalysis/uni/\"\n";
    cout<<"\tBiigrams->\"<project_root>/frequencyanalysis/bi/\"\n";
    cout<<"\tTrigrams->\"<project_root>/frequencyanalysis/tri/\"\n";
  
//fork GA to generate test data
   cout<<"\n==========Initializing Genetic Algorithms===========";
   GA ga;
//	cout<<pt;
   for(int k=2;k<=100;k++)   
      GA ga(k);  

/*
   cout<<"\n========Encrypting Data Using Chromosome Pool=======";
	cmap cm(pt,1); //We'll later move this to GA.cpp
	*/
  }


return 0;
}
