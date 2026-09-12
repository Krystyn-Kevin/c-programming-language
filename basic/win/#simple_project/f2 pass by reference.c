#include <stdio.h>
#include <stdlib.h>

int pbr(int *a,int *b);

int main(){
    int *a= (int*)malloc(sizeof(int));
    *a=10;
    int *b= (int*)malloc(sizeof(int));
    *b=20;
    pbr(*a,*b)
    return 0;
}

int pbr(int a,int b){
    *a,*b=*b,*a;
    printf("%d %d",*a,*b);
    return 0;
}