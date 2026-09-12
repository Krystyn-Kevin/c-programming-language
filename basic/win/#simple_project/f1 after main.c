#include <stdio.h>

int is_even(int num);

int main(void){
    int num;
    printf("Enter value for num: ");
    scanf("%d",&num);
    printf("%d",is_even(num));
}

int is_even(int num){
    switch(num%2){
        case 0:
            return 1;
        default:
            return 0; 
    }
}