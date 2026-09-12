/*calloc*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *p=(int*) calloc(5,sizeof(int));
    for (i=0;i<5;i++){
        p[i]=(i+1)*10;
    }
    for (i=0;i<5;i++){
        printf("%p\n",(void*)&p[i]);
        printf("%d\n",p[i]);
    }
    free(p);
    p=NULL;
    return 0;
}