#include "affine.h"

void Affine::cipher(string text)
{  fout<<setw(35)<<text<<setw(35);
   cout<<"\n :: Encryption :: \n";
   for(string::iterator it1 = text.begin(); it1 != text.end(); it1++)
   {  ch1 = encrypt(*it1);
      cout<<" "<<*it1<<" --> "<<ch1<<"\n";	    
      fout<<ch1;	
      ciphertext += ch1;               
   }
      fout<<"\n";
      fout.close();
 //We'll later see if this is required in future!   

/*   cout<<"\n :: Decryption :: \n";
   for(string::iterator it2 = ciphertext.begin(); it2 != ciphertext.end(); it2++)
   {  ch2 = decrypt(*it2);
      cout<<" "<<*it2<<" --> "<<ch2<<"\n";
   }
*/ 
}

char Affine::encrypt(char c)
{  
   y = a*(c-97)+b;
   temp1 = char(((y%26)+97));
   return temp1;
}


char Affine::decrypt(char c)
{
   z = ((26-a)*((c-97)-b));
   if(z<0)
      temp2 = char((26-abs(z%26)+97));
   else
      temp2 = char((z%26)+97);
   return temp2;
}

/*
int main()
{
string str;
cout<<"enter a string:\n";
cin>>str;
Affine a;
a.cipher(str);

return 0;
}
*/


