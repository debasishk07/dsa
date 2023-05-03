#include<stdio.h>
#include<stdlib.h>
int stack[30],choice,temp,top=-1,size;
void push();
void pop();
void display();
void main(){
    
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    while(1){
    printf("Enter your choice\n\n");
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exiting the program>>...:(\n");
            exit(0);
        }
        default:
        printf("\nEnter a valid choice\n");
    }
    }
}
void push(){
    if(top==size-1){
        printf("\nStack Overflow\n");
    }
    else{
        top++;
        printf("\nEnter the element\n");
        scanf("%d",&stack[top]);
    }
}
void pop(){
    if(top==-1){
        printf("\nStack Underflow\n");
    }
    else{
        printf("\nThe deleted item was %d\n",stack[top]);
        top--;
        size--;
    }
}
void display(){
    temp = top;
    if(top==-1){
        printf("\nStack underflow\n");
    }
    else{
        while(temp>=0){
            printf("%d  ",stack[temp]);
            temp--;
        }
    }
}