/*this is a simple calculator*/

#include <stdio.h>

int main(){
    int a,b;
    printf("This is a simple calculator\n");
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("\nEnter 2nd number: ");
    scanf("\n%d",&b);
    printf("\n%d",a+b);
    printf("\n%d",a-b);
    printf("\n%d",a*b);
    printf("\n%lf",a/b);
    return 0;   
}