#include <stdio.h>

void chk(int n);
int n;

void chk(int n){
    if (n>0){
        printf("+ve");
    }
    else if (n<0){
        printf("-ve");
    }
    else{
        printf("0");
    }
}

int main(){
    scanf("%d",&n);
    chk(n);
    getchar();
    return 0;
}