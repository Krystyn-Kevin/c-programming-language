/*Passing pointer to function and checking local and global scope of variable*/
#include <stdio.h>

void cnp(int n);
void cp(int *n);

void cp(int *n){
    *n=40;
    printf("inside function pointer: %d\n",*n);
}

void cnp(int n){
    n=50;
    printf("inside function no pointer: %d\n",n);
}

int main(){
    int a,n;
    int *p;
    a=10;
    p=&a;
    printf("outside function before change: %d\n",a);
    cnp(a);
    cp(p);
    printf("outside function after change: %d",a);
    return 0;
}