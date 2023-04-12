#include<stdio.h>
int stack[30],top=-1,choice,len,temp=0;
void push();
void pop();
void display();
void main(){
    printf("Enter the length of the stack\n");
    scanf("%d",&len);
    while(1){
        printf("\n1.push\n2.pop\n3.display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                display();
                break;
            case 4 :
                printf("Exiting the program\n");
                exit(0);

            default:
                printf("Enter a valid option\n");
        }
    }
}
void push(){
    int value;
    
    if(top == len-1){
        printf("Stack Overflow\n");
    }
    else
        {   printf("\nEnter the value\n");
            scanf("%d",&value);
            top++;
            stack[top]= value;
    }
}
void pop(){

    if(temp==-1){
        printf("Stack Underflow\n");
    }
    else {
        printf("\nPopped item is %d \n",stack[top]);
        top--;

    }
}
void display(){
    int temp;
    if (top==-1){
        printf("Stack underflow\n");
    }
    else
    {
        temp = top;
        while(temp>=0){
            printf("%d\n",stack[temp]);
            temp--;
        }
    }
}