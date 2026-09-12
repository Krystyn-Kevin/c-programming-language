/*Sum of 2 int user input*/
#include <stdio.h>


int sum(int a,int b);

int sum(int a,int b){
	return a+b;
}


int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("sum is: %d",sum(a,b));
	return 0;
}