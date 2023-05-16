#define MAX 10000
#define LINKED_BASED 1
#define ARRAY_BASED 0
/**********************************************************************/
/*****************CHOOSE TYPE OF IMPLEMENTATION************************/

#define TYPE_OF_IMPLEMENTATION LINKED_BASED
typedef unsigned char StackEntry;

typedef struct stacknode {

StackEntry entery;
struct stacknode *next ;


}StackNode;

typedef struct stack{
StackNode *top;
int size;
StackEntry entry[MAX];
int Top;

}Stack;

//functions prototype
void CreateStack (Stack *ps);
int StackFull(Stack *ps);
void Push(StackEntry e,Stack *ps);
int StackEmpty(Stack *ps);
void Pop(StackEntry *pe,Stack *ps );
void StackTop(StackEntry *pe,Stack *ps);
int StackSize(Stack*ps);
void ClearStack (Stack *ps);
void TraverseStack(Stack *ps,void(*pf)(StackEntry));



