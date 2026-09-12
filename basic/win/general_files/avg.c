#include <stdio.h>

int main(){
	int grades[3];
	float avg;
	grades[0]=1;
	grades[1]=2;
	grades[2]=3;
	avg=(grades[0]+grades[1]+grades[2])/3;
	printf("avg is %.2f",avg);
	return 0;

}