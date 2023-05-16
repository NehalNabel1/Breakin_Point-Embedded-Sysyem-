#define NULL 0
#define MAXLIST 1000
#define LINKED_BASED 1
#define ARRAY_BASED 0
/**********************************************************************/
/*****************CHOOSE TYPE OF IMPLEMENTATION************************/

#define TYPE_OF_IMPLEMENTATION LINKED_BASED

typedef unsigned char ListEntery;
/**********************************************************************/
typedef struct listnode {
ListEntery entery;
struct listnode *next;

}ListNode;
/**********************************************************************/
typedef struct list{
 ListNode *head;
 ListEntery entery[MAXLIST];
 int size;

}List;
/**********************************************************************/
void CreateList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);
void DestroyList(List *pl);
int InsertList(int pos,ListEntery e,List *pl);
void DeleteList(int pos,ListEntery *pe,List *pl);
void RetrieveList(int pos,ListEntery *pe,List *pl);
void ReplaceList(int pos,ListEntery e,List *pl);
void TraverseList(List *pl,void(*visit)(ListEntery));
