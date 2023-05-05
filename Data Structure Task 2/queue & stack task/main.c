#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "queue.h"
#include "global.h"

Stack s;
void Display(QueueEntery e){

           printf("Customer Name : %s \n",e.Name);
           printf("Customer ID : %d \n",e.ID);
           printf("The model year of the car : %d",e.model);
           printf("\n------------------------------\n");

}

 void Push_stack(StackEntry e){

    Push(e,&s);
}


int main()
{
    QueueEntery e;
    Queue q;
    QueueCreate(&q);

    CreateStack(&s);
    int num,check=0;
    do{
        printf("1. Add a New Customer.\n");
        printf("2. Serve a Customer.\n");
        printf("3. How many Customers are waiting ?\n");
        printf("4. Display Customers Information.\n");
        printf("5. Display Customers information in a most-recent Order.\n");
        printf("6. Exit\n");
        printf("Enter your Choice : \n");
        scanf("%d",&num);
        if(num==1){
                printf("Enter your name : \n");
                fflush(stdin);
                gets(e.Name);
                printf("Enter The ID : \n");
                scanf("%d",&e.ID);
                printf("Enter Model year of your car : \n");
                scanf("%d",&e.model);
                Append(&q,e);
                printf("Thanks for registering ,We will let you in soon\n");
                printf("\n-----------------------------\n");

        }
        else if(num==2){
           Serve(&q,&e);
           printf("Customer Name : %s \n",e.Name);
           printf("Customer ID : %d \n",e.ID);
           printf("The model year of the car : %d",e.model);
           printf("\n------------------------------\n");


        }
        else if(num==3){
               int size= QueueSize(&q);
                printf("Customers are waiting : %d \n",size);
                printf("------------------------------\n");


        }
        else if(num==4){
                TraverseQueue(&q,&Display);

        }
        else if(num==5){
                ClearStack(&s);
                TraverseQueue(&q,&Push_stack);
                TraverseStack(&s,&Display);

        }
        else if(num==6){
            check=1;
            printf("Exit\n");
        }
    }while(check==0);








    return 0;
}
