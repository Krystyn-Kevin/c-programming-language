#include <stdio.h>
int main(){
    int a=10;
    printf("a=%d\n",a);
    int b=a++;
    printf("b=a++%d\n",a);
    printf("a=%d\n",a);
    int c=++a;
    printf("c=++a%d\n",a);
    printf("a=%d\n",a);
    return 0;
}