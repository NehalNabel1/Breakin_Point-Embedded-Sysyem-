//QueueEntery is the datatype of the elements you want to put in the queue
typedef unsigned char QueueEntery;
//Max size of the queue
#define MAXQUEUE 1000

//struct to create the variables we will use in the queue
typedef struct Queue{
    int front;
    int rear;
    int size;
    QueueEntery entery[MAXQUEUE];

}Queue;

//functions prototype

void QueueCreate(Queue *pq);
void Append(Queue *pq,QueueEntery e);
void Serve (Queue *pq,QueueEntery *pe);
int QueueEmpety(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize (Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq ,void(*pf)(QueueEntery ));


