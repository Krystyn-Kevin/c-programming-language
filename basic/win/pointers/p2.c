#include <stdio.h>

int main(){
    int a=9,b=10;
    int *p,*q;
    p=&a,q=&b;
    q=p;
    printf("address of a=%p,%p\n",&a,p);
    printf("value of a=%d,%d\n",a,*p);
    printf("address of b=%p,%p\n",&b,q);
    printf("value of b=%d,%d\n",b,*q);
    return 0;
}