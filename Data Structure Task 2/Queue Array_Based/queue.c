#include "queue.h"
//Function to create empty queue
void QueueCreate(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
//Function to put elements in the queue
void Append(Queue *pq,QueueEntery e){
    pq->rear=(pq->rear+1) % MAXQUEUE;
    pq->entery[pq->rear]=e;
    pq->size++;


}
//Function to serve first element
void Serve (Queue *pq,QueueEntery *pe){
   *pe= pq->entery[pq->front];
   pq->front=(pq->front+1)% MAXQUEUE;
   pq->size--;


}
//Function to check if the queue is empty return 1 else return 0
int QueueEmpety(Queue *pq) {
    if (pq->size==0){
        return 1;
    }
    else{
        return 0;
    }

}
//Function to check if the queue is full return 1 else return 0
int QueueFull(Queue *pq) {
     return pq->size==MAXQUEUE ;

}
//Function to return the size of queue
int QueueSize (Queue *pq){
return pq->size ;

}
//Function to clear the queue
void ClearQueue(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;


}
//Function to get elements of the queue
void TraverseQueue(Queue *pq ,void(*pf)(QueueEntery )){
    int pos ,s;
    for(pos=pq->front ,s=0;s< pq->size ;s++){
        (*pf)(pq->entery[pos]);
        pos=(pos+1)% MAXQUEUE;
    }


}

