#include<stdio.h>
#include<stdlib.h>
int queue[20],front=-1,rear=-1,size;
void insert();
void delete();
void display();

void main(){
    int choice;
    printf("\nEnter the size of the queue : ");
    scanf("%d",&size);
    while(1){
        printf("\nEnter your choice : ");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    insert();
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    display();
                    break;
            case 4: 
                    printf("\nExiting the programm\n");
                    exit(0);
            default:
                    printf("\nBhai tu kar kya raha hai?\n");
        }
    }
}
void insert(){
    int value;
    if(rear== size-1){
        printf("\nQueue Overflow\n");
    }
    else{
        if(front==-1){
            front++;
            rear++;
            printf("\nEnter the element : ");
            scanf("%d",&value);
            queue[rear]=value;
        }
        else{
            rear++;
            printf("\nEnter the element : ");
            scanf("%d",&value);
            queue[rear]=value;
        }
    }
}
void delete(){
    if(front==size-1){
        printf("\nQueue underflow\n");
    }
    else{
        printf("\nThe deleted value is %d ",queue[front]);
        front++;
    }
}
void display(){

    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}