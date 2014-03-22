#include "./cryptanalysis/GA.h"
#include "./cryptanalysis/fanalysis.h"
#include "./cryptosystem/affine.h"
#include <string.h>
using namespace std;

int main()
{

//fork affine cipher to generate training data
    string str;
    cout<<"enter a string:\n";
    cin>>str;
    Affine a;
    a.cipher(str);
    cout<<"\n\nOK......Training set appended at:\n\t\"<project_root>/TrainingData/TSet.dat\" \n\n";

//frequency analysis
	FILE *f;
	f = fopen ("./TrainingData/TSet.dat","r");
	char pt[50],ct[50];
	//fseek(f,-71,SEEK_END);
    while(fscanf(f,"%s%s*c",pt,ct)!=EOF);
	printf("%s\n",ct);
	fclose (f);	
	fanalysis fa(ct,"file.dat");
    cout<<"\n\nOK......Frequency Analysis performed on given sample\n";
    cout<<"\tUnigrams->\"<project_root>/frequencyanalysis/uni/\"\n";
    cout<<"\tBiigrams->\"<project_root>/frequencyanalysis/bi/\"\n";
    cout<<"\tTrigrams->\"<project_root>/frequencyanalysis/tri/\"\n";


     
//fork GA to generate test data
	GA ga;
	ga.init();
	
	



return 0;
}
