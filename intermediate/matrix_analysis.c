#include <stdio.h>
int n,div;
int mat_op (int (*mat_ptr)[n],int div);
int main(){
    //input for n
    printf("Enter the number for matrix row (square matrix)\n");
    scanf("%d",&n);
    getchar();
    //variables declaration
    int matrix [n][n];
    int i,j; 
    //matrix input
    for(i=0;i<n;i++){
        printf("inside loop");
        for(j=0;j<n;j++){
            printf("Enter value for m=%d n=%d\n",i+1,j+1);
            scanf("%d",*(matrix+i)+j);
            getchar();
        }
        j=0;
    }
    //ptr declaration
    int (*mat_ptr)[n] = matrix;
    //divisible number div input
    printf("Enter number to check divisiblity\n");
    scanf("%d",&div);
    getchar();
    //printing matirx for reference
    i=0,j=0;
    for(i;i<n;i++){
        for(j;j<n;j++){
            printf("%d\t",*(*(matrix+i)+j));
        }
        printf("\n");
        j=0;
    }
    //call func mat_op
    mat_op(mat_ptr,div);
    return 0;
}
int mat_op(int (*mat_ptr)[n], int div){
    int sum = 0;
    int i=0,j=0;
    for(i;i<n;i++){
        for(j;j<n;j++){
            if (i<j){
                int val = *(*(mat_ptr+i)+j);
                if (val%div == 0){    
                    sum+=val;
                }
            }
        }
        j=0;
    }
    printf("Sum of values above leading diagonal which are divisible by %d is %d\n",div,sum);
    return 0;
}