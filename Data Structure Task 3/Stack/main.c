#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void Display(StackEntry e){
printf("%c ",e);

}

int main()
{
    Stack s;
    StackEntry e;
    int check=0,num;
    CreateStack(&s);
    do{
    printf("Enter 1 to add element\n");
    printf("Enter 2 to delete element from the stack \n");
    printf("Enter 3 to to get the Top element\n");
    printf("Enter 4 to print the reversed stack\n");
    printf("Enter 5 to print the size of the stack\n");
    printf("Enter 6 to exit\n");
    fflush(stdin);
    scanf("%d",&num);

        if(num==1){
          if(!StackFull(&s)){
          printf("Enter the character : ");
          fflush(stdin);
          scanf("%c",&e);
          Push(e,&s);
          printf("Element Added !\n");
          printf("----------------------\n");
          }
        }


        else if(num==2){
          if (!StackEmpty(&s)){
          Pop(&e,&s);
          printf("Element Deleted !\n");
          printf("----------------------\n");
          }
        }

        else if(num==3){
          if (!StackEmpty(&s)){
          StackTop(&e,&s);
          printf("The Top element is : %c\n",e);
          printf("----------------------\n");
          }
        }

        else if(num==4){
        printf("Reversed Stack is : ") ;
        TraverseStack(&s,&Display);
        printf("\n----------------------\n");
        }
        else if (num==5){
            int size=StackSize(&s);
            printf("Size is : %d\n",size);
            printf("----------------------\n");
        }
        else if(num==6){
            printf("Exit !");
            check=1;

        }

} while(check !=1);


    return 0;
}
