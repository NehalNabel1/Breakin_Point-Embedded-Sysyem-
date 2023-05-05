#include "queue.h"
#include "global.h"
#include <stdio.h>
//Function to create empty queue
void QueueCreate(Queue *pq){
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}
//Function to put elements in the queue
//check first if there is memory for pn or not
int Append(Queue *pq,QueueEntery e){
    Queuenode *pn=(Queuenode*)malloc(sizeof(Queuenode));
    if(!pn){
        return 0;
    }
    else {
    pn->next=NULL;
    strcpy(pn-> entery.Name, e.Name );
    pn->entery.ID=e.ID;
    pn->entery.model =e.model;
    if (! pq->rear)
        pq->front=pn;
    else
        pq->rear->next=pn;
      pq->rear=pn;
      pq->size++;

    return 1;

    }

   }
//Function to serve first element
void Serve (Queue *pq,QueueEntery *pe){
   Queuenode *pn=pq->front;
   *pe=pn->entery;
   pq->front=pq->front->next;
   free(pn);
   pq->size--;
   if(!pq->front)
    pq->rear=NULL;


}
//Function to check if the queue is empty return 1 else return 0
int QueueEmpety(Queue *pq) {
    return !pq->front;

}
//Function to check if the queue is full return 1 else return 0
int QueueFull(Queue *pq) {
     return 0 ;

}
//Function to return the size of queue
int QueueSize (Queue *pq){
return pq->size ;

}
//Function to clear the queue moving with two pointers
void ClearQueue(Queue *pq){
    while(pq->front){
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;


}
//Function to get elements of the queue
void TraverseQueue(Queue *pq ,void(*pf)(QueueEntery )){
   for(Queuenode *pn=pq->front; pn;pn=pn->next){
    (*pf)(pn->entery);
   }

}



