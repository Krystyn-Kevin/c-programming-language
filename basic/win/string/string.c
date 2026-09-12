#include <stdio.h>
#include <string.h>

void main(){
	char k[] = "kevin";
	printf("%s",k);
	printf("%.8s",k);
	printf("%5.3s",k);
	puts(k);
	char n[]="\0";
	char l[4]="ra";
    printf("%s",strcat(l,n));
}