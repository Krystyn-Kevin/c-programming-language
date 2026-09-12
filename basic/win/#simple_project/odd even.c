/*odd even*/
#include <stdio.h>
int chk(int a);

int chk(int a){
	if (a%2==0){
		printf("even");
		return 0;
	}
	else{
		printf("odd");
		return 0;
	}
}
int main(){
	int a;
	scanf("%d",&a);
	chk(a);
	return 0;
}