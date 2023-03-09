#include "Stack.h"

//Function to create stack
void CreateStack (Stack *ps){
    ps->top=0;       //*ps.top=0;

}
//Function to check the stack is full or not
int StackFull(Stack *ps){
    if(ps->top==MAXSTACK){
        return 1;
    }
    else{
        return 0;
    }
}
//Function to add elements to the stack 
void Push(StackEntry e,Stack *ps){
ps->entry[ps->top]=e;
ps->top++;


}
//Function to check the stack is empty or not
int StackEmpty(Stack *ps){
return !ps->top;

}
//Function to delete the last element
void Pop(StackEntry *pe,Stack *ps ){
ps->top--;
*pe=ps->entry[ps->top];


}
//Function to get the last element
void StackTop(StackEntry *pe,Stack *ps){

*pe=ps->entry[ps->top-1];

}
//Function to get the size of the stack
int StackSize(Stack*ps){
return ps->top;
}
//Function to clear the stack
//it destroys the elements of the stack and initialized it again
void ClearStack (Stack *ps){
ps->top=0;

}
//Function to get the elements of the stack
void TraverseStack(Stack *ps,void(*pf)(StackEntry)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }


}
