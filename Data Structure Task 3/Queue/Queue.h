#define MAXQUEUE 1000
#define LINKED_BASED 1
#define ARRAY_BASED 0
/**********************************************************************/
/*****************CHOOSE TYPE OF IMPLEMENTATION************************/

#define TYPE_OF_IMPLEMENTATION LINKED_BASED
//QueueEntery is the datatype of the elements you want to put in the queue
typedef unsigned char QueueEntery;

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
    int Front;
    int Rear;
    QueueEntery entery[MAXQUEUE];

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


