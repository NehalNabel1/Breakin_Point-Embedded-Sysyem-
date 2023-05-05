#include <stdio.h>
#include <stdlib.h>
#include "Stack-using-queue.h"

int main()
{

   char e;
    create_stack();
    int num,check=0;
    do{
    printf("To add element to the stack enter 1 \n");
    printf("To get the Top element and delete it enter 2 \n");
    printf("To clear the Stack enter 3 \n");
    printf("To exit enter 4 : ");
    fflush(stdin);
    scanf("%d",&num);
    if(num==1){
         printf("Enter the element : ");
         fflush(stdin);
         scanf("%c",&e);
         push(e);
         printf("Element Added !");
         printf("\n------------------\n");

    }
    else if(num==2){
          e= pop(&e);
          if(e==0){
            printf("Stack is Empty");
          }
          else
           printf("Top element is %c",e);
           printf("\n------------------\n");

    }
    else if(num==3){
        clear_stack(&e);
        printf("Stack is Cleared \n");
    }
    else if (num==4){
        check=1;
    }
    else{
        printf("Error !Enter the correct number");
    }
    }while(check==0);






    return 0;
}




