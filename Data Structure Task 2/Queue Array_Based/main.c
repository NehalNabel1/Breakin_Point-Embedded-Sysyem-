#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//Function to print elements of the queue  
void Display(QueueEntery e){

printf("%c ",e);

}


int main()
{
    Queue q;
    QueueEntery e;
    int check=0,num;
//create the queue
   QueueCreate(&q);
    do{
//take user choice
    printf("Enter 1 to add element to the Queue\n");
    printf("Enter 2 to get the first element to serve\n");
    printf("Enter 3 to to clear the Queue \n");
    printf("Enter 4 to print the Queue\n");
    printf("Enter 5 to print the size of the Queue\n");
    printf("Enter 6 to exit\n");
    fflush(stdin);
    scanf("%d",&num);

        if(num==1){
        //first check if the queue is full or not
        if( !QueueFull(&q)){
        printf("Enter the Element : \n");
        fflush(stdin);
        scanf("%c",&e);
        Append(&q,e);
        printf("Element is Added !\n");
        printf("-----------------------------\n");
        }
        }


        else if(num==2){
          //first check if the queue is empty or not
          if(!QueueEmpety(&q)){
            Serve(&q,&e);
            printf("First Element is : %c\n",e);
          }
       }

        else if(num==3){
          ClearQueue(&q);
          printf("Queue is cleared !\n");
          printf("-----------------------------\n");

        }

        else if(num==4){
         //first check if the queue is empty or not
         if(!QueueEmpety(&q)){
        printf("Queue : ") ;
        TraverseQueue(&q,&Display);
        printf("\n----------------------\n");}
        }
        else if (num==5){
            int size=QueueSize(&q);
            printf("Size is : %d\n",size);
            printf("----------------------\n");
        }
        else if(num==6){
            printf("Exit !");
            check=1;

        }
//exit when check equal 1 
} while(check !=1);


    return 0;
}

