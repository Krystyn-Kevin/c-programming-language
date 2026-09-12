/*Differentiation of x^n*/
#include <stdio.h>
#include <math.h>
int differentiation(int n, int k);int fact(int a);
int main(){
    int n,k,x;
    printf("Enter value of x");
    scanf("%d",&x);
    printf("Enter initial power of x");
    scanf("%d",&n);
    printf("Enter number of times the differentiation should tale place");
    scanf("%d",&k);
    //equ is x^n
    //solution is (n!/(n-k)!)*x^(n-k)
    int p1=differentiation(n,k);
    int p2=pow(x,n-k);
    printf("%d",p1*p2);
    return 0;
}

int differentiation (int n, int k){
    int num,dem;
    num=fact(n);
    dem=fact(n-k);
    return num/dem;
}

int fact(int a){
    if (a==0 || a==1){
        return 1;
    }
    return a*(fact(a-1));   
}

