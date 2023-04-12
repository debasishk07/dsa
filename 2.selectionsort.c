// wap to merge two array and sort them using selection sort algorithm
#include<stdio.h>
void main(){
    int arr[10],brr[10],crr[30],i,j,temp,len1,len2;
    printf("Enter the length of the 1st array\n");
    scanf("%d",&len1);
    printf("Enter the elements of the 1st array\n");
    for(i=0;i<len1;i++){
        printf("Enter the element\n");
        scanf("%d",&arr[i]);
    }

    printf("Enter the length of the 2nd array\n");
    scanf("%d",&len2);
    printf("Enter the elements of the 2nd array\n");
    for(i=0;i<len2;i++){
        printf("Enter the element\n");
        scanf("%d",&brr[i]);
    }
    int len3 = len1+len2;
    // merging the two arrays

    for(i=0;i<len1;i++){
        crr[i]=arr[i];
    }
    for(j=0;i<len3;i++,j++){
        crr[i]=brr[j];
    }
    // print the merged array
    printf("The merged array is \n");
    for(i=0;i<len3;i++){
        printf("%d ",crr[i]);
    }
    // for sorting using selection sort

    int small;
    
    for(i=0;i<len3;i++){
        small = i;
            for(j=i+1;j<len3;j++){
                if(crr[j]<crr[small])
                    small = j;
            }

        if(small != i){
            temp = crr[i];
            crr[i]=crr[small];
            crr[small]=temp;
        }
    }
    printf("\nThe array after merging and sorting is \n");
    for(i=0;i<len3;i++){
        printf("%d ",crr[i]);
    }

}