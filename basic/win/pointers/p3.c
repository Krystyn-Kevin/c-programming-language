#include <stdio.h>

int main(){
    int a=9;
    int *p;
    p=&a;
    printf("value of a=%d\n%p",*p,p);
    p=p+2;
    printf("value of a=%d\n%p",*p,p);
    return 0;
}