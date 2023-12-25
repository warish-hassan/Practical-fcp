//write a program to perform multiplication of two 2D arrays.
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],pro[10][10],r,c,i,j,k;
    printf("enter number of row(1 to 10)");
    scanf("%d",&r);
     printf("enter number of cloumn(1 to 10)");
    scanf("%d",&c);
    printf("enter elements of first matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter elements of second matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            pro[i][j]=0;
            for(k=0;k<c;k++){
                pro[i][j]=pro[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("matrix multiplication is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",pro[i][j]);

        }
        printf("\n");
    }
    return 0;
}
