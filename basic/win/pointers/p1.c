#include <stdio.h>

int main(){
    int a=9;
    int *p;
    p=&a;
    printf("value of a=%p",a);
    printf("value of a=%p from pointer",*p);
    printf("address of a =%p",p);
    printf("address of a=%p",&a);
    return 0;
}