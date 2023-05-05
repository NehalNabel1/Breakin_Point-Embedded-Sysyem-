#include "queue-stack.h"
#include "Stack-using-queue.h"
Queue q1,q2,q;
void create_stack(void){

QueueCreate(&q1);
QueueCreate(&q2);}


void push (QueueEntery e){
Append(&q2,e);
while(!QueueEmpety(&q1)){
   Serve(&q1,&e);
   Append(&q2,e) ;
}
//swap the names of q1.q2
QueueCreate(&q);
q=q1;
q1=q2;
q2=q;


}
//pop function will return the last element and delete it
char pop(QueueEntery *e){

if(!QueueEmpety(&q1)){

            Serve(&q1,&e);
            return e;
           }
           else{

            return 0;
           }




}
//clear the stack
void clear_stack(QueueEntery *e){

while(!QueueEmpety(&q1)){
   Serve(&q1,&e);
}


}
