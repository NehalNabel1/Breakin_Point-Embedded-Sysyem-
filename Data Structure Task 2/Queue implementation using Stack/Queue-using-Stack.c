#include "Stack.h"
#include "Queue-using-Stack.h"
Stack s1,s2;
void Queue_create(void){
    CreateStack(&s1);
    CreateStack(&s2);

}
void Append(QueueEntry e){
   QueueEntry E=e;
    while(!StackEmpty(&s1)){
        StackTop(&e,&s1);
            Push(e,&s2);
            Pop(&e,&s1);

    }
    Push(E,&s1);
    while(!StackEmpty(&s2)){
        StackTop(&e,&s2);
            Push(e,&s1);
            Pop(&e,&s2);

    }

 }

StackEntry service(QueueEntry *e){
    if(StackEmpty(&s1)){
        return 0;
    }
    else{
    StackTop(&e,&s1);
    Pop(&e,&s1);
    return e;}

}

void clear_Queue(QueueEntry *e){

while(!StackEmpty(&s1)){

            Pop(&e,&s1);

    }
}
