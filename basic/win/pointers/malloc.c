/*malloc*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p=(int*) malloc(sizeof(int));
    *p=10;
    printf("%d\n",*p);
    printf("%p\n",p);
    free(p);
    p=NULL;
    return 0;
}