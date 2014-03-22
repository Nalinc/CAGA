#include <stdlib.h>
#include<stdio.h>

int main()
{
  char str1[80],str2[80];
  FILE * pFile;
  pFile = fopen ("./TSet.dat","r");
  while(fscanf(pFile, "%s%s%*c", str1,str2) != EOF)	
      printf("%c\n",str2[0]);
  fclose (pFile);
  return 0;

}

