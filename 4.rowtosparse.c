#include<stdio.h>
void main(){
    int sparse[50][50],rowmajor[50][3],i,j,row,sparserow,sparsecol,nzero;
    printf("\nEnter the rows of the rowmajor matrix : ");
    scanf("%d",&row);
    printf("\nEnter the row major matrix \n");
    for(i=0;i<row;i++){
        for(j=0;j<3;j++){
            printf("\nEnter the value : ");
            scanf("%d",&rowmajor[i][j]);
        }
    }
    sparserow=rowmajor[0][0];
    sparsecol=rowmajor[0][1];
    nzero=rowmajor[0][2];
    for(i=0;i<sparserow;i++){
        for(j=0;j<sparsecol;j++){
            sparse[i][j]=0;
        }
    }
    for(i=0;i<nzero+1;i++){
        sparse[rowmajor[i][0]][rowmajor[i][1]]=rowmajor[i][2];
    }
    for(i=0;i<sparserow;i++){
        for(j=0;j<sparsecol;j++){
            printf("%d  ",sparse[i][j]);
        }
        printf("\n");
    }
}
