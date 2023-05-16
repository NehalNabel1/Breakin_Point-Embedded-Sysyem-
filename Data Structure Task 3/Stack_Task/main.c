#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Stack.h"
#include "queue.h"
void Display(QueueEntery e){

printf("%c",e);

}
int Operators(char ch){

if(ch=='+' || ch=='-'){
    return 1;
}
else if(ch=='*' || ch=='/'){
    return 2;

}
else if(ch=='^'){
    return 3;

}
else {
    return -1;
}

}
int main()
{
    StackEntry e;
    char infix[MAX];
    Queue Postfix;
    Stack s;
    QueueCreate(&Postfix);
    CreateStack(&s);
    int j=0;
    printf("Enter the infix Expression : \n");
    fflush(stdin);
    gets(infix);
    int len=strlen(infix);
    for(int i=0;i<len;i++){

        if((!(isalpha(infix[i])==0))|| (infix[i]>='0' && infix[i]<='9') ){
             Append(&Postfix,infix[i]);
        }
        else if(infix[i]=='('){
            Push(infix[i] ,&s);
        }
        else if(infix[i]==')'){
                while(StackTop(e,&s) !='('){
                      Append(&Postfix,StackTop(e,&s) );
                      Pop(&e,&s);
                      }
                      Pop(&e,&s);

        }
         else if (infix[i]==' '){

            continue;
        }
        else {
                while( (!StackEmpty(&s)) && (Operators(infix[i]) <= Operators(StackTop(e,&s)))){

                      Append(&Postfix,StackTop(e,&s) );
                      Pop(&e,&s);

                      }
                       Push(infix[i] ,&s);


        }
    }
    while(!StackEmpty(&s)){
       Append(&Postfix,StackTop(e,&s) );
           Pop(&e,&s);
    }

    printf("the Postfix Expression is : ");

    TraverseQueue(&Postfix ,& Display);










    return 0;
}
