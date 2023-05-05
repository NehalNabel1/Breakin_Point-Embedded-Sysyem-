#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack-linked-based.h"


void Display(StackEntry e){

printf("%d ",e);

}

int main()
{

    Stack s;
    StackEntry e;
    int check=0 ,num ,min;
    //create the stack
    CreateStack(&s);
    do{
  //take user choice
    printf("Enter 1 to add element to the stack\n");
    printf("Enter 2 to print the size of the stack\n");
    printf("Enter 3 to print the stack\n");
    printf("Enter 4 to exit\n");
    fflush(stdin);
    scanf("%d",&num);

        if(num==1){
        //first check if the queue is full or not
        if( !StackFull(&s)){
        printf("Enter the Element : \n");
        fflush(stdin);
        scanf("%d",&e);
        Push(e,&s);
        printf("Element is Added !\n");
        printf("-----------------------------\n");
        }
        }


       else if(num==2){
        int size =StackSize(&s);
        printf("The size is : %d \n",size);
         }


        else if(num==3){
         //first check if the Stack is empty or not
         if(!StackEmpty(&s)){
        printf("Stack: ") ;
        TraverseStack(&s,&Display);
        printf("\n----------------------\n");}
        }

        else if(num==4){
            printf("Exit !");
            check=1;

        }
//exit when check equal 1
} while(check !=1);





    return 0;
}
