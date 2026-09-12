#include <stdio.h>
float sum(float a);

float sum(float a){
    scanf("%f",&a);
    return a;
}

int main(){
    float a;
    printf("%f",sum(a));
    return 0;
}