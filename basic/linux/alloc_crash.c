#include <stdio.h>
#include <stdlib.h>

int main (){
	int n=2;
	while (1){
		int *ptr=calloc(2^n,sizeof(int));
		n=1000+n;
		printf("%d\n%p\n",n,ptr);
		if (n==1024){
			getchar();}
	}
	return 0;
}
