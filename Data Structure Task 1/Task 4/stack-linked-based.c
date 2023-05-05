#include "Stack-linked-based.h"
#include <stdlib.h>
#define MAX 10000
/****************************************************
*************Function to Create The Stack**************/

void CreateStack (Stack *ps){
    ps->top=NULL;
    ps->size=0;
    ps->Min=MAX;
}
/****************************************************
**********Function to check if the stack is full or not***********/

int StackFull(Stack *ps){
    return 0;
}
/****************************************************
******** Function to put elements in the Stack*********/
void Push(StackEntry e,Stack *ps){
StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
//check first if the element is smaller the min
if(e <(ps->Min)){

    ps->Min=e;

 }
pn->entery=e;
pn->next=ps->top;
ps->top=pn;
ps->size++;

}
/****************************************************
**********Function to check if the stack is Empty or not***********/
int StackEmpty(Stack *ps){
return ps->top==NULL;

}
/****************************************************
********Function to Delete the last element from the stack and get it**********/
void Pop(StackEntry *pe,Stack *ps ){
StackNode *pn;
*pe= ps->top->entery;
pn=ps->top;
ps->top=ps->top->next;
free(pn);
ps->size--;

}


/****************************************************
**********Function to get the last element from the stack***********/
void StackTop(StackEntry *pe,Stack *ps){

*pe=ps->top->entery;

}
/****************************************************
**********Function to get the size of the stack***********/
int StackSize(Stack*ps){
return ps->size;
}

/****************************************************
*****Function to destroy the elements of the stack and initialized it again****/
void ClearStack (Stack *ps){
StackNode *pn=ps->top;
while(pn){
    pn=pn->next;
    free(ps->top);
    ps->top=pn;

}
ps->size=0;
ps->Min=MAX;


}
/****************************************************
*******Function to get the elements of the stack*******/
void TraverseStack(Stack *ps,void(*pf)(StackEntry)){
    StackNode *pn=ps->top;
    while(pn){
            (*pf)(pn->entery);
            pn=pn->next;


    }
}
/****************************************************
*******Function to get the Minimum element in the stack which is O(1)*******/
int FindMin(Stack *ps){
return ps->Min ;

}

/****************************************************
*************Function to Copy The Stack**************/

void StackCopy (Stack *ps,Stack *ps2){

StackNode *pn1=ps->top;


while(pn1){
   Push(pn1->entery ,ps2);
    pn1=pn1->next;


}
}



