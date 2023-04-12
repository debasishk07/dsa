#include<stdio.h>
void main(){
    int sparse[50][50],colmajor[3][50],row,col,nzero,i,j;
    printf("\nEnter the rows,cols,non-zero values of the sparse mtrix\n");
    scanf("%d %d %d",&row,&col,&nzero);
    for(i=0;i<nzero;i++){
        for(j=0;j<3;j++){
            scanf("%d",&colmajor[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sparse[i][j]=0;
        }
    }
    for(i=1;i<nzero;i++){
        sparse[colmajor[0][i]][colmajor[1][i]]=colmajor[i][2];
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
    }
}