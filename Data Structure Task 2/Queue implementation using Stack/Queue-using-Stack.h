
typedef unsigned char QueueEntry;


void Queue_create(void);
void Append(QueueEntry e);
QueueEntry service(QueueEntry *e);
void clear_Queue(QueueEntry *e);
