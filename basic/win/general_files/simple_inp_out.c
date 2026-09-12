#include <stdio.h>

int main(){
	int age;
	char name[10];
	printf("Enter your Name:");
	scanf("%s",name);
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Name %s \n",name);
	printf("Age %d",age);	
	return 0;
	
}