#include <stdio.h>

int main(){
	int grades[2][3];
	grades[0][0]=1;
	grades[0][1]=2;
	grades[0][2]=3;
	grades[1][0]=4;
	grades[1][1]=5;
	grades[1][2]=6;
	int i,j;
	for (i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf(" %d ",grades[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
