#include "./cryptanalysis/GA.h"

int main()
{

//fork affine cipher to generate training data
    string str;
    cout<<"enter a string:\n";
    cin>>str;
    Affine a;
    a.cipher(str);

//frequency analysis
    fanalysis fa();
     


//fork GA to generate test data
	GA a;
	a.init();
	
	



return 0;
}
