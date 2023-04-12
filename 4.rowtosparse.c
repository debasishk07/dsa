//convert rowmajor to sparse matrix
#include<stdio.h>
int main(){
    int sparse[50][50],row,col,i,j,nzero,rowmajor[50][3];
    printf("\nEnter the number of rows,cols and nzero elements\n");
    scanf("%d %d %d",&row,&col,&nzero);

    for(i=0;i<nzero;i++){
        for(j=0;j<3;j++){
            scanf("%d",&rowmajor[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sparse[i][j]=0;
        }
    }
    for(i=1;i<nzero;i++){
        sparse[rowmajor[i][0]][rowmajor[i][1]]= rowmajor[i][2];
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
    }

    return 0;
}