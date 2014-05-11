#include "GA.h"
void GA::crossover(int gen,int mode)
{
  //   for(int k=0;k<4;k++)
    //   cout<<ff[k]<<endl;

//--ga
  if(mode==0) //Only GA, Mahesh's Work
  {
  string par1, par2, temp_l1, temp_l2, temp_r1, temp_r2, c1, c2, c3, c4,s2,str0,str1;
     s2="./chromosomes/."+to_string(gen)+".dat";

     fout.open(s2.c_str(),ios::out); 

     fout<<ff[0]<<"\n";
     fout<<ff[1]<<"\n";
     fout<<ff[2]<<"\n";
     fout<<ff[3]<<"\n";

//----
// 0-1   0-2  0-3  1-2
 //CROSSOVER
  for(int i = 0;i < 1; i++)
  {
     for(int j = i+1;i+j < 3; j++)
     { 
  	   par1=ff[i];
	   par2=ff[j]; 
	   temp_l1 = "";
	   temp_l2 = "";
	   temp_r1 = "";
	   temp_r2 = "";
	   
//	   cout<<"\n\n Reading lines "<<i+1<<" and "<<j+1;	 
	   	 
       temp_l1.append(par1, 0, 15);
       temp_r1.append(par1, 15, 11);
//	   cout<<"\ntemp_l1 (P1L) : "<<temp_l1;	
//       cout<<"\ntemp_r1 (P1R) : "<<temp_r1;
     
       
       temp_l2.append(par2, 0, 15);   
	   temp_r2.append(par2, 15, 11);
//	   cout<<"\ntemp_l2 (P2L) : "<<temp_l2;	
//	   cout<<"\ntemp_r2 (P2R) : "<<temp_r2;										
       
       
       c1 = cross(temp_l1, temp_r2);       
       c2 = cross(temp_l2, temp_r1);
       c3 = cross(temp_r2, temp_l1);
       c4 = cross(temp_r1, temp_l2);
            
       fout<<c1<<"\n";
       fout<<c2<<"\n";
       fout<<c3<<"\n";
       fout<<c4<<"\n";
       
	 }
  }	 
  
//MUTATION in parents ff[0] and ff[1]
	 str0=ff[0];
	 for(int i=0;i<4;i++)
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
	 


    fout.close();
  } 
//--ga
  
//--sa
  if(mode==1)  //Only SA,
   { 
	 string s2,str0,str1,str2,str3;
     s2="./chromosomes/."+to_string(gen)+".dat";

     fout.open(s2.c_str(),ios::out); 

     fout<<ff[0]<<"\n";
     fout<<ff[1]<<"\n";
     fout<<ff[2]<<"\n";
     fout<<ff[3]<<"\n";

 	 str0=ff[0];
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
   } 
//--sa

//--hybrid   
  if(mode==2)  //Hybrid Approach
  {    string s2,str0,temp;
       s2="./chromosomes/."+to_string(gen)+".dat";
       fout.open(s2.c_str(),ios::out); 
       if(gen==80)//mqu
         ff[0]="insxchqrwbgluvafkpmzejotyd";

       string mk="insxchmrwbglqvafkpuzejotyd";

       for(int itr=0;itr<4;itr++)
       {   temp="";
		   for(int i=0;i<26;i++)
			  if(ff[itr][i]!=mk[i])
			  {   temp+=ff[itr][i];
				  ff[itr][i]='-';    
			   } 
		
		for(int k=0;k<4;k++)
		{ srand(time(0));
		  random_shuffle(temp.begin(), temp.end()); 
		  int c=0;str0=ff[itr];
		  for(i=0;i<26;i++)  	
			 if(str0[i]=='-')
			 {  str0[i]=temp[c];c++;}        
		  fout<<str0<<"\n";	
		} 
		 
    }  
    
    fout<<ff[0]<<"\n";
    fout<<ff[1]<<"\n";
    fout<<ff[2]<<"\n";
    fout<<ff[3]<<"\n";
    fout.close();
   }
//--hybrid


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
     cmd="sort -nrk2 ./chromosomes/"+to_string(gen)+".dat -o ./chromosomes/"+to_string(gen)+".dat";
     system(cmd.c_str()); 

}

string GA::cross(string s1, string s2)
{
	bool flag;
	int j;
	int k = 0;
	string t = "abcdefghijklmnopqrstuvwxyz";
	t = replace(t, s1);
	t = replace(t, s2);
	   for(int i = 0; i< s1.length(); i++)
	   {
		  flag = true;
		  j = 0;
		  while(flag && j<s1.length())
		  {
			if (s1[j] == s2[i]) 
			{
				flag = false;
				break;
			}
			j++;
		  }
		  if(!flag)
		  {
			while(t[k] == '#')
			   k++;
			s2[i] = t[k++];
		  }
	   }       
       return s1+s2;
}

string GA::replace(string t1, string t2)
{
	for (int i = 0; i< t2.length(); i++)
		t1[t2[i]-97] = '#';
	return t1;
}




/*
int main()
{
	GA ga;
	ga.init();
}
*/

