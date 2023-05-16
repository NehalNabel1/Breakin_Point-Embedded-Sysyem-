#include <stdio.h>
#include <stdlib.h>
#include "List.h"
void Display(ListEntery e){
printf("%c ",e);

}

int main()
{
    List l;
    ListEntery e;
    int check=0,num,position;
    CreateList(&l);
    do{
    printf("Enter 1 to add element\n");
    printf("Enter 2 to delete element from the list \n");
    printf("Enter 3 to to get element from certain position\n");
    printf("Enter 4 to print the list\n");
    printf("Enter 5 to print the size of the list\n");
    printf("Enter 6 to exit\n");
    fflush(stdin);
    scanf("%d",&num);

        if(num==1){
          if(!ListFull(&l)){
          printf("Enter the character : \n");
          fflush(stdin);
          scanf("%c",&e);
          printf("Enter the position :");
          fflush(stdin);
          scanf("%d",&position);
          if(position > ListSize(&l)){
            printf("Enter valid position\n");
          }
          else{


          int c=InsertList(position,e,&l);
          if(c==1){
            printf("Element Added !\n");
          printf("----------------------\n");
          }


          }
        }
        }

        else if(num==2){
          if (!ListEmpty(&l)){
          printf("Enter Element position to Delete : \n");
          fflush(stdin);
          scanf("%d",&position);
          DeleteList(position,&e,&l);
          printf("Element %c is Deleted !\n",e);
          printf("----------------------\n");
          }
        }

        else if(num==3){
          if (!ListEmpty(&l)){
          printf("Enter Element position : \n");
          fflush(stdin);
          scanf("%d",&position);
          RetrieveList(position,&e,&l);
          printf("The element is : %c\n",e);
          printf("----------------------\n");
          }
        }

        else if(num==4){
        printf("List is : ") ;
        TraverseList(&l,&Display);
        printf("\n----------------------\n");
        }
        else if (num==5){
            int size= ListSize(&l);
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
