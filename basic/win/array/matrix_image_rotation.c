#include<stdio.h>
//inp matrix
//transpose
//shift elements

int main(){
    int r,c,i,j,temp = 0;
    printf("Enter row and column: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //inp
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("val @ a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //transpose
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
             temp=a[i][j];
             a[i][j]=a[j][i];
             a[j][i]=temp;            
        }
    } 
    //rotation
    for (int k=0; k<c;k++){
        for (j=0;j<r/2;j++){
        temp = a[k][j];
        a[k][j] = a[j][k];
        a[j][k] = temp;
        }
    }

    //disp
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
 return 0;
}