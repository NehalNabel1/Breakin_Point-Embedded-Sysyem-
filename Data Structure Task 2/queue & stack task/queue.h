//QueueEntery is the datatype of the elements you want to put in the queue
#define NULL 0
#include "global.h"

//struct to create the node variables
typedef struct queuenode{
QueueEntery entery;
struct queuenode *next;

}Queuenode;
//struct to create the variables we will use in the queue
typedef struct Queue{
    Queuenode* front;
    Queuenode* rear;
    int size;

}Queue;

//functions prototype

void QueueCreate(Queue *pq);
int Append(Queue *pq,QueueEntery e);
void Serve (Queue *pq,QueueEntery *pe);
int QueueEmpety(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize (Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq ,void(*pf)(QueueEntery ));



