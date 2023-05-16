#include "Stack.h"
#include <stdlib.h>

/****************************************************
*************Function to Create The Stack**************/

void CreateStack (Stack *ps){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    ps->top=NULL;
    ps->size=0;

    }
     else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
         ps->Top=0;
     }

}
/****************************************************
**********Function to check if the stack is full or not***********/

int StackFull(Stack *ps){
     if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    return 0;}
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
            if(ps->Top==MAX){
        return 1;
    }
    else{
        return 0;
    }

     }

}
/****************************************************
******** Function to put elements in the Stack*********/
void Push(StackEntry e,Stack *ps){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
StackNode *pn=(StackNode*)malloc(sizeof(StackNode));


pn->entery=e;
pn->next=ps->top;
ps->top=pn;
ps->size++;
}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
ps->entry[ps->Top]=e;
ps->Top++;

     }
}
/****************************************************
**********Function to check if the stack is Empty or not***********/
int StackEmpty(Stack *ps){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
return ps->top==NULL;
}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    return !ps->Top;

     }

}
/****************************************************
********Function to Delete the last element from the stack and get it**********/
void Pop(StackEntry *pe,Stack *ps ){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
StackNode *pn;
*pe= ps->top->entery;
pn=ps->top;
ps->top=ps->top->next;
free(pn);
ps->size--;
}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
 ps->Top--;
*pe=ps->entry[ps->Top];


     }

}


/****************************************************
**********Function to get the last element from the stack***********/
void StackTop(StackEntry *pe,Stack *ps){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
*pe=ps->top->entery;
}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
*pe=ps->entry[ps->Top-1];


     }

}
/****************************************************
**********Function to get the size of the stack***********/
int StackSize(Stack*ps){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
return ps->size;}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    return ps->Top;
}
}

/****************************************************
*****Function to destroy the elements of the stack and initialized it again****/
void ClearStack (Stack *ps){
 if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
StackNode *pn=ps->top;
while(pn){
    pn=pn->next;
    free(ps->top);
    ps->top=pn;

}
ps->size=0;

 }
 else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
        ps->Top=0;
     }

}
/****************************************************
*******Function to get the elements of the stack*******/
void TraverseStack(Stack *ps,void(*pf)(StackEntry)){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    StackNode *pn=ps->top;
    while(pn){
            (*pf)(pn->entery);
            pn=pn->next;


    }
    }

    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
        for(int i=ps->Top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }


     }
}



