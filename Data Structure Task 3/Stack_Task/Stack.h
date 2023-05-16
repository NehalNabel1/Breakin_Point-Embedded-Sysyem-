#define MAX 1000
typedef unsigned char StackEntry;

typedef struct stacknode {

StackEntry entery;
struct stacknode *next ;


}StackNode;

typedef struct stack{
StackNode *top;
int size;
int Min;

}Stack;

//functions prototype
void CreateStack (Stack *ps);
int StackFull(Stack *ps);
void Push(StackEntry e,Stack *ps);
int StackEmpty(Stack *ps);
void Pop(StackEntry *pe,Stack *ps );
StackEntry StackTop(StackEntry pe,Stack *ps);
int StackSize(Stack*ps);
void ClearStack (Stack *ps);
void TraverseStack(Stack *ps,void(*pf)(StackEntry));
int FindMin(Stack *ps);


