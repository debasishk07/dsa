// convert sparse matrix to rowmajor matrix
#include<stdio.h>
int main(){

    int sparse[30][30],row,col,rowindex,colindex,nzero,temp,rowmajor[30][3];
    temp =1;
    nzero=0;
    printf("\nEnter the number of Rows\n");
    scanf("%d",&row);
    printf("\nEnter the number of Column\n");
    scanf("%d",&col);

    printf("\nEnter the elements of the sparse matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&sparse[i][j]);
        }
    }

    for(rowindex=0;rowindex<row;rowindex++){
        for(colindex=0;colindex<col;colindex++){
            if(sparse[rowindex][colindex]!=0){
                    nzero++;
            }
        }

    }
    rowmajor[0][0]=row;
    rowmajor[0][1]=col;
    rowmajor[0][2]=nzero;

    for(rowindex=0;rowindex<row;rowindex++){
        for(colindex=0;colindex<col;colindex++){
            if(sparse[rowindex][colindex]!=0){
                rowmajor[temp][0]= rowindex;
                rowmajor[temp][1]= colindex;
                rowmajor[temp][2]= sparse[rowindex][colindex];
                temp++;
            }
        }
    }
    // display the sparse matrix
    printf("\n\n");
    for(rowindex=0;rowindex<nzero+1;rowindex++){
        for(colindex=0;colindex<3;colindex++){
            printf("%d\t",rowmajor[rowindex][colindex]);
        }
        printf("\n");
    }


    return 0;
}