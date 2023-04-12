#include<stdio.h>
void main(){
    int arr[10],brr[10],crr[30],i,j,temp,len1,len2,len3,flag=0;
    printf("Enter the length of the first array\n");
    scanf("%d",&len1);

    printf("Enter the elements\n");
    for(i=0;i<len1;i++){
        printf("Enter the element  ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the length of the first array\n");
    scanf("%d",&len2);

    printf("Enter the elements\n");
    for(i=0;i<len2;i++){
        printf("Enter the element  ");
        scanf("%d",&brr[i]);
    }
    //merging of two array in a new array
    len3 = len1+len2;
    for(i=0;i<len1;i++){
        crr[i]=arr[i];
    }
    for(j=0;j<len3;j++,i++){
        crr[i]=brr[j];
    }
    // printing the new unsorted array
    printf("The merged array is \n");
    for(i=0;i<len3;i++){
        printf("%d ",crr[i]);
    }

    // bubblesort algorithm
    printf("\nThe sorted array is \n");
    for(i=0;i<len3;i++){
        for(j=0;j<len3-i-1;j++){
            if(crr[j]>crr[j+1]){
                temp = crr[j];
                crr[j]=crr[j+1];
                crr[j+1]=temp;
                flag = 1;

            }
            
        }
        //the code below will check and prevent the loop from running if all the elements are already sorted
        if(flag==1){
            continue;
            }
            else if(flag==0){
                printf("\nThe array is already sorted\n");
                break;
            }

    }
    printf("\n");
    for(i=0;i<len3;i++){
        printf("%d ",crr[i]);
    }
    printf("\n");


}