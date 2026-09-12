#include <stdio.h>
int sum(int a, int b);

int sum(int a, int b){
    int c=a+b;
    return c;
}

int main(){
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("sum is: %d",sum(a,b));
    return 0;
}