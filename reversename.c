#include <stdio.h>  
#include <string.h>  
  
#define max 100 

int top=-1,stack[max];  
  
void push(char x){  
  
      // Push(Inserting Element in stack) operation  
      if(top == max-1){  
          printf("stack overflow");  
      } 
        else {  
            top++;
            stack[top]=x;  
      }  
  
}  
  
void pop(){  
    // Pop (Removing element from stack)  
      printf("%c",stack[top]);
      top--;  
}  
  
  
void main()  
{  
   char str[max];  
   printf("\nEnter your name\n");
   scanf("%s",str);
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();  
}