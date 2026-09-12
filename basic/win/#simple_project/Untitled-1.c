#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a= calloc(1,sizeof(int)),*b=calloc(1,sizeof(int));
    *a=9;
    *b=10;
    *a=*a+*b; 
    *b=*a-*b; 
    *a=*a-*b; 
    printf("%d\n%d\n",*a,*b);
    printf("%p\n%p",a,b);
    return 0;
}