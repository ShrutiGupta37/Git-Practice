// traspose a matrix in C
#include<stdio.h>
int mat[3][3];
int main(){
    int i,j;
    printf("Enter elements: ");
    scanf("%d", &mat[0][0]);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Original matrix is:\n");
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}