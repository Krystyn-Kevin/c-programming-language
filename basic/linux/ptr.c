#include <stdio.h>
#include <stdlib.h>

int main (){
	int *ptr1= malloc(1*sizeof(int));
	int *ptr2= malloc(1*sizeof(int));
	int *ptr3= calloc(1,sizeof(int));	
	int *ptr4= calloc(1,sizeof(int));
	*ptr1=9;
	*ptr2=9;
	*ptr3=9;
	*ptr4=9;
	printf("%p\n",ptr1);
	printf("%d\n",*ptr1);
	printf("%p\n",ptr2);
	printf("%d\n",*ptr2);
	printf("%p\n",ptr3);
	printf("%d\n",*ptr3);
	printf("%p\n",ptr4);
	printf("%d\n",*ptr4);
	ptr1=NULL;
	ptr2=NULL;
	ptr3=NULL;
	ptr4=NULL;
	return 0;	
}
