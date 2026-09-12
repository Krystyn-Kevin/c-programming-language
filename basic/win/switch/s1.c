#include <stdio.h>

int main(){
    int i=3;
    switch (i){
        case 1:
            printf("Yes");
            break;
        case 2:
            printf("No");
            break;
        default:
            printf("Neutral");
            break;
    }
    return 0;
}