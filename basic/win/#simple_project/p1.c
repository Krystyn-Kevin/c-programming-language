#include <stdio.h>

int main(){
	int temp_data[]={25,27,26,28,29};
	int *ptr = temp_data;
	int i=0;
	float k=0,sum=0;
	k=sizeof(temp_data)/sizeof(temp_data[0]);
	for (i=0;i<k;i++){
		sum+=*ptr;
		ptr++;
	}
	float avg=(sum/k);
	printf("%f",avg);
	return 0;
}