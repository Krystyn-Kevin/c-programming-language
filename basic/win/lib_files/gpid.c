#include <stdio.h>
#include <windows.h>

int main(){
    printf("pid is %lu",GetCurrentProcessId());
    return 0;
}