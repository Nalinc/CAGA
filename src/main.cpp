#include "./cryptanalysis/GA.h"
#include "./cryptanalysis/fanalysis.h"
#include "./cryptosystem/affine.h"
#include <string.h>
using namespace std;

int main(int argc,char **argv)
{

if(argc==2 && strcmp(argv[1],"-t")==0)
{
  exit(0);
}
//fork affine cipher to generate training data
    cout<<"=====Generating Training Data from cryptosystem=====";
    string str;
    cout<<"\nenter a string: ";
    cin>>str;
    Affine a;
    a.cipher(str);
    cout<<"\n\nOK......Training set appended at:\n\t\"<project_root>/TrainingData/TSet.dat\" \n\n";

//frequency analysis
   cout<<"===========Performing Frequency Analysis============";
	FILE *f;
	f = fopen ("./TrainingData/TSet.dat","r");
	char pt[50],ct[50];
	//fseek(f,-71,SEEK_END);
    while(fscanf(f,"%s%s*c",pt,ct)!=EOF);
	fclose (f);	
	fanalysis fa(ct,"file.dat");
    cout<<"\n\nOK......Frequency Analysis performed on given sample\n";
    cout<<"\tUnigrams->\"<project_root>/frequencyanalysis/uni/\"\n";
    cout<<"\tBiigrams->\"<project_root>/frequencyanalysis/bi/\"\n";
    cout<<"\tTrigrams->\"<project_root>/frequencyanalysis/tri/\"\n";

//fork GA to generate test data
   cout<<"\n==========Initializing Genetic Algorithms===========";
	GA ga;
	ga.init();
	
	



return 0;
}
