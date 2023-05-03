#include<stdio.h>
void main(){
    int rowmajor[50][3],nzero,i,j,temp=1,colmajor[50][3],row,col;
    printf("Enter the total number of non-zero values of the Sparse matrix\n");
    scanf("%d",&nzero);
    
    // taking the input of the matrix
    printf("\nEnter the elements of the matrix");

    for(i=0;i<nzero+1;i++){
        for(j=0;j<3;j++){
            printf("Enter the element");
            scanf("%d",&rowmajor[i][j]);
        }
    }
    // display the matrix
    for(i=0;i<nzero+1;i++){
        for(j=0;j<3;j++){
            printf("%d ",rowmajor[i][j]);
        }
        printf("\n");
    }
    // transpose
    row = rowmajor[0][0];
    col = rowmajor[0][1];

    colmajor[0][0] = col;
    colmajor[0][1] = row;
    colmajor[0][2] = nzero;

    for(j=0;j<col;j++){
        for(i=0;i<nzero+1;i++){
            if(rowmajor[i][1] == j){
                colmajor[temp][0] = j;
                colmajor[temp][1] = rowmajor[i][0];
                colmajor[temp][2] = rowmajor[i][2];
                temp++;
            }
        }
    }
    printf("\nThe values of the transpose matrix are\n");
    for(i=0;i<nzero+1;i++){
        for(j=0;j<3;j++){
            printf("%d  ",colmajor[i][j]);
        }
        printf("\n");
    }
}
