#include "fanalysis.h"

void fanalysis::unigram(fstream &f1)
{	
it = unigrams.begin();

   for(i=0;i<s.size();i++) 
	  if(unigrams.count(s.substr(i, 1))>0)
        ++unigrams[s.substr(i, 1)];		
	  else 
        unigrams.insert(it,pair<string,int>(s.substr(i, 1),1));
		
   for (it=unigrams.begin(); it!=unigrams.end(); ++it)
        f1<<it->first<<"\t"<<it->second<<"\n";
}

void fanalysis::bigram(fstream &f2)
{	
it = bigrams.begin();

   for(i=0;i<s.size()-1;i++) 
	  if(bigrams.count(s.substr(i, 2))>0)
        ++bigrams[s.substr(i, 2)];		
	  else 
        bigrams.insert(it,pair<string,int>(s.substr(i, 2),1));
		
   for (it=bigrams.begin(); it!=bigrams.end(); ++it)
        f2<<it->first<<"\t"<<it->second<<"\n";	
}

void fanalysis::trigram(fstream &f3)
{
  it = trigrams.begin();

   for(i=0;i<s.size()-2;i++) 
	  if(trigrams.count(s.substr(i, 3))>0)
        ++trigrams[s.substr(i, 3)];		
	  else 
        trigrams.insert(it,pair<string,int>(s.substr(i, 3),1));
		
   for (it=trigrams.begin(); it!=trigrams.end(); ++it)
        f3<<it->first<<"\t"<<it->second<<"\n";	
}

/*
int main()
{
FILE *f;
f = fopen ("../../TrainingData/TSet.dat","r");
char pt[50],ct[50];
fscanf(f,"%s%s*c",pt,ct);	
printf("%s\n",ct);
fclose (f);	

fanalysis fa(ct,"file.dat");

return 0;
}

*/
