#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack-linked-based.h"
#define MAX 10000

int main()
{
    Stack s;
    StackEntry e;
    char TheString[MAX];
    int check=0;
    //create the stack
    CreateStack(&s);
    printf("Enter The String : ");
   gets (TheString);
    //calculate the length of the string
    int length=strlen(TheString);
    //loop for the all elements in the string
    for(int i=0;i<length;i++){
            //if the element is '[' or '(' or '{' only we will put it in the stack
        if(TheString[i]=='[' || TheString[i]=='{'  || TheString[i]=='('){
            Push(TheString[i] ,&s);

           }
           //check if the stack is empty or not
          else if(!StackEmpty(&s)){
              StackTop(&e,&s);
       //then check if the element is parentheses and its matching is in the top of the stack
        if(TheString[i]==']' && e =='['){
             //delete its matching from the stack
             Pop(&e,&s);
        }
        else if(TheString[i]=='}' && e =='{'){

             Pop(&e,&s);
        }
        else if(TheString[i]==')' && e =='('){
             Pop(&e,&s);
        }
        //if the stack does not contain its matching we will get out from the loop and make check=1
        else if (TheString[i]==']' || TheString[i]=='}'  || TheString[i]==')') {
               check=1;
               break;

        }

        }
    }
    if((!StackEmpty(&s) ) || check==1){
        printf("Error");

    }
    else{
        printf("Valid");
    }



    return 0;
}
