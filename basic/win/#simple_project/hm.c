#include <stdio.h>

int min_hrs(float min){
    printf("%.3f min is %.3f hrs",min,(min/60));
    return 0;
}

int hrs_min(float hrs){
    int min=60*hrs;
    printf("%.3f hrs is %.3f min\n",hrs,min);
    return min; 
}

int main(){
    float min,hrs;
    printf("Hours to min conversion\n");
    printf("Enter hrs - ");
    scanf("%f",&hrs);
    getchar();
    
    
    return 0;
    hrs_min();
    min_hrs(min);
    getchar();
    return 0;
}