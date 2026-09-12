#include <stdio.h>
int main(){
    int sensor_reading [3];
    int i,sum=0;
    for (i=0;i<3;i++){
        scanf("%d",&sensor_reading[i]);
    }
    for (i=0;i<3;i++){
        sum += sensor_reading[i];
        printf("%d\n%d",sensor_reading[i],sum);
    }
    int avg=sum/3;
    printf("%d",avg);
    getchar();
    return 0;
}
