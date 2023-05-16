#include <stdlib.h>
#include "Queue.h"

//Function to create empty queue
void QueueCreate(Queue *pq){
     if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;}
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    pq->Front=0;
    pq->Rear=-1;
    pq->size=0;
    }
}
//Function to put elements in the queue
//check first if there is memory for pn or not
int Append(Queue *pq,QueueEntery e){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    Queuenode *pn=(Queuenode*)malloc(sizeof(Queuenode));
    if(!pn){
        return 0;
    }
    else {
            pn->next=NULL;
    pn->entery=e;
    if (! pq->rear)
        pq->front=pn;
    else
        pq->rear->next=pn;
    pq->rear=pn;
    pq->size++;

    return 1;

    }
    }
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    pq->Rear=(pq->Rear+1) % MAXQUEUE;
    pq->entery[pq->Rear]=e;
    pq->size++;
    }

   }
//Function to serve first element
void Serve (Queue *pq,QueueEntery *pe){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
   Queuenode *pn=pq->front;
   *pe=pn->entery;
   pq->front=pq->front->next;
   free(pn);
   pq->size--;
   if(!pq->front)
    pq->rear=NULL;
    }
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    *pe= pq->entery[pq->Front];
    pq->Front=(pq->Front+1)% MAXQUEUE;
    pq->size--;
    }


}
//Function to check if the queue is empty return 1 else return 0
int QueueEmpety(Queue *pq) {
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    return !pq->front;}
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
            if (pq->size==0){
        return 1;
    }
    else{
        return 0;
    }
    }

}
//Function to check if the queue is full return 1 else return 0
int QueueFull(Queue *pq) {
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
     return 0 ;}
     else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
            return pq->size==MAXQUEUE ;
    }

}
//Function to return the size of queue
int QueueSize (Queue *pq){
return pq->size ;

}
//Function to clear the queue moving with two pointers
void ClearQueue(Queue *pq){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    while(pq->front){
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
    }
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
            pq->Front=0;
            pq->Rear=-1;
            pq->size=0;

    }


}
//Function to get elements of the queue
void TraverseQueue(Queue *pq ,void(*pf)(QueueEntery )){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
   for(Queuenode *pn=pq->front; pn;pn=pn->next){
    (*pf)(pn->entery);
   }
    }
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){

    int pos ,s;
    for(pos=pq->Front ,s=0;s< pq->size ;s++){
        (*pf)(pq->entery[pos]);
        pos=(pos+1)% MAXQUEUE;
    }
    }

}

