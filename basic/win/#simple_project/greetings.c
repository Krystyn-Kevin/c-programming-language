#include <stdio.h>

int main(){
    int g;
    do{
        printf("1.Greet\n2.GoodBye\n3.exit\n");
        scanf("%d",&g);
        switch(g){
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("GoodBye\n");
                break;
            case 3:
                printf("exiting\n");
                break;
            default:
                printf("Invalid entry");
        
        }
    }while (g!=3);
    return 0;
}