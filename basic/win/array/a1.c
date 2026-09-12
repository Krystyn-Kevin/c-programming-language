#include <stdio.h>
int main(){
    int i,sum=0,n;
    int arr []={1,2,3,4,5};
    n=sizeof(arr)/sizeof(arr[0]);

    for (i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Avg is: %d",sum/n);
    return 0;
}
