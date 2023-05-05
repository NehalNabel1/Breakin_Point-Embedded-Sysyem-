#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Queue-using-Stack.h"


int main()
{

    QueueEntry e;
    int num,check=0;
    Queue_create();
    do{
    printf("To add element to the Queue enter 1 \n");
    printf("To get the First element to serve it enter 2 \n");
    printf("To clear the Stack enter 3 \n");
    printf("To exit enter 4 : ");
    fflush(stdin);
    scanf("%d",&num);
    if(num==1){
         printf("Enter the element : ");
         fflush(stdin);
         scanf("%c",&e);
         Append(e);
         printf("Element Added !");
         printf("\n------------------\n");}

         else if(num==2){
                 e=service(&e);
            if(e==0){
                printf("Error ! Queue is Empty\n");
            }
            else{
                printf("First Element is : %c \n",e);
            }

         }
         else if(num==3){
             clear_Queue(&e);
              printf("Queue is Cleared \n");

         }
         else if(num==4){
                check=1;
                printf("Exit");

         }
         else {
                printf("Error !Enter the correct number");

         }
    }while(check==0);


    return 0;
}
