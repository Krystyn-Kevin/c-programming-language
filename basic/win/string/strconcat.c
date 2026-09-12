#include <stdio.h>
#include <string.h>

void main(){
	int len1,len2,i=0;
	char k[6] ;
	char kr[8] ;
	scanf("%s",&kr);
	scanf("%s",&k);
	printf("%s\n",strcat(k,kr));
	len2=strlen(k);
	len1=strlen(kr);
	for (i=0;i<=len2;i++);
	{
		kr[len1+i]=k[i];
	}
	printf("%s",kr);
}