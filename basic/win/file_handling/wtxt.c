#include <stdio.h>

int main(){
    FILE *f;
    f=fopen("sample.txt","w");
    if (f == NULL){
        return 1;
    }
    fprintf(f,"File Handling\nhey buddy");

    
    return 0;
}