#include <stdio.h>
/*print multiplication table of input based on user*/
int main(){
	printf("multiplication table from 1 to 10\n");
	int i,j; 
	for (i=1;i<=10;i++){
		for (j=1;j<=10;j++){
			printf("%4d",i*j);
		}
		printf("\n");
	}
	getchar();
	return 0;
}