#include "List.h"

void CreateList(List *pl){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){


  pl->head=NULL;
  pl->size=0;
    }
    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
        pl->size=0;

    }

}
/**********************************************************************/
int ListEmpty(List *pl){
    return !pl->size ;

}
/**********************************************************************/
int ListFull(List *pl){
     if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    return 0;}

    else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
    return pl->size ==MAXLIST;
    }

}
/**********************************************************************/
int ListSize(List *pl){
    return  pl->size ;

}
/**********************************************************************/
void DestroyList(List *pl){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
ListNode *q;
while(pl->head){
    q=pl->head->next;
    free(pl->head);
    pl->head=q;
}
pl->size=0;
}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
pl->size=0;}

}

/**********************************************************************/
int InsertList(int pos,ListEntery e,List *pl){
    if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
int i;
ListNode*p,*q;
 if(p=(ListNode*)malloc(sizeof(ListNode))){
 p->entery=e;
 p->next=NULL;
 if(pos==0){
    p->next=pl->head;
    pl->head=p;
 }
 else{
    for(q=pl->head,i=0;i<pos-1;i++){
        q=q->next;
    }
    p->next=q->next;
    q->next=p;
 }
pl->size++;
return 1;

}
else{
    return 0;
}
    }
 else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
            int i;
     for(i=pl->size-1 ;i>=pos  ;i--){
    pl->entery[i+1]=pl->entery[i];
     }
   pl->entery[pos]=e;
   pl->size++;
return 1;
     }


}
/**********************************************************************/
void DeleteList(int pos,ListEntery *pe,List *pl){
 if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
int i;
ListNode *q,*tmp;
if(pos==0){
        *pe= pl->head->entery;
       tmp=pl->head->next;
       free( pl->head);
        pl->head=tmp;

}
else{
        for(q=pl->head,i=0;i<pos-1;i++){
        q=q->next;
    }

    *pe= q->next->entery;
    tmp=q->next->next;
    free(q->next);
    q->next=tmp;

}
pl->size--;
}
 else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){

       *pe=pl->entery[pos];
       int i;
       for(i= pos+1 ;i<=pl->size-1  ;i++){
       pl->entery[i-1]=pl->entery[i];
}
pl->size--;
 }
}
/**********************************************************************/
void RetrieveList(int pos,ListEntery *pe,List *pl){
  if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    int i;
  ListNode *q;
  for(q=pl->head ,i=0;i<pos;i++){
       q=q->next; }
  *pe=q->entery;


}
else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
        *pe=pl->entery[pos];
 }
}
/**********************************************************************/
void ReplaceList(int pos,ListEntery e,List *pl){

 if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
    int i;
  ListNode *q;
  for(q=pl->head ,i=0;i<pos;i++){
       q=q->next; }
  q->entery=e;
}
 else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){
         pl->entery[pos]=e;
 }
}
/**********************************************************************/
void TraverseList(List *pl,void(*visit)(ListEntery)){
if(TYPE_OF_IMPLEMENTATION==LINKED_BASED){
ListNode *p=pl->head;
while(p){
   (*visit)(p->entery) ;
   p=p->next;
}
}
 else if(TYPE_OF_IMPLEMENTATION==ARRAY_BASED){

int i;
for(i=0;i<pl->size ;i++){
    (*visit)(pl->entery[i]);
}
 }
}




