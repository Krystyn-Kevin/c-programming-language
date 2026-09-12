/*input nnumber of elements for single dimensional array*/
#include <stdio.h>

int main(){
	int arr [10],i;
	for(i=0;i<10;i++){
		printf("enter element \n");
		arr[i]=scanf("%d");
	}
	for(i=0;i<10;i++){
		printf("%d \n",arr[i]);
	}


}