#include <stdio.h>

float a,b;
char op;

void calc(char op,float a, float b);

void calc(char op, float a, float b){
    switch(op){
        case '+':
            printf("%.2f\n",a+b);
            break;
        case '-':
            printf("%.2f\n",a-b);
            break;
        case '*':
            printf("%.2f\n",a*b);
            break;
        case '/':
            printf("%.2f\n",a/b);
            break;
        default:
            printf("invalid entry");
    }
}


int main(){
    
    while (true){
        printf("Enter the operator (+ - * /): \n");
        scanf(" %c",&op);
        printf("Enter 2 oprands (eg:1 2): \n");
        scanf(" %f %f",&a,&b);
        calc(op,a,b);
    }
    getchar();
    return 0;
}