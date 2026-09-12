/*realloc*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *p=(int*) calloc(5,sizeof(int));
    for (i=0;i<5;i++){
        p[i]=(i+1)*10;
    }
    int *altadd = realloc(p, 2*sizeof(int));
    p=altadd;
    p[5]=5;
    p[6]=6;
    int x = 7;
    for (i=0;x;i++){
        printf("%p\n",(void*)&p[i]);
        printf("%d\n",p[i]);
    }
    free(p);
    p=NULL;
    return 0;
}