//convert sparse to column major
#include<stdio.h>

int main(){

    int sparse[30][30],row,col,rowindex,colindex,temp,nzero,colmajor[3][30];
    temp = 1;
    nzero= 0;
    printf("\nEnter the number of rows of the Sparse matrix\n");
    scanf("%d",&row);
    printf("\nEnter the number of columns of the Sparse matrix\n");
    scanf("%d",&col);
    printf("\n\n");
    printf("\nEnter the elements\n");
        for(rowindex=0;rowindex<row;rowindex++){
            for(colindex=0;colindex<col;colindex++){
            
                scanf("%d",&sparse[rowindex][colindex]);
            }
        }
    for(rowindex=0;rowindex<row;rowindex++){
        for(colindex=0;colindex<col;colindex++){
            if(sparse[rowindex][colindex]!=0){
                nzero++;
            }
        }
    }
    //convert the matrix

    colmajor[0][0]=col;
    colmajor[0][1]=row;
    colmajor[0][2]=nzero;

    for(rowindex=0;rowindex<row;rowindex++){
        for(colindex=0;colindex<col;colindex++){
            colmajor[temp][0]=colindex;
            colmajor[temp][1]=rowindex;
            colmajor[temp][2]=sparse[rowindex][colindex];
            temp++;
        }
    }
    for(rowindex=0;rowindex<nzero+1;rowindex++){
        for(colindex=0;colindex<3;colindex++){
            printf("%d\t",colmajor[rowindex][colindex]);
        }
        printf("\n");
    }


    return 0;
}