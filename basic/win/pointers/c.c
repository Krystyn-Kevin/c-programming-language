/*calloc*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p=(int*)calloc(1,sizeof(int));
    *p=10;
    printf("%p",(void*)p);
    printf("%d",*p);

}