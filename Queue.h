#define Queue_H
#include "Node.h"

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->data=x;
  new_node->nextPtr=NULL;
 }
 if(q->tailPtr){
  q->tailPtr->nextPtr=new_node;
 }
 else {
  q->headPtr = new_node;
 }
 q->tailPtr=new_node;
 q->size++;
}


int dequeue_struct(Queue *q){
  if(q->size>0){
    NodePtr t=q->headPtr;
    int value=t->data;
    if(q->size==0)
      q->headPtr=NULL;
      q->size--;
      free(t);
      return value;
  }
}
   /*if(t){
   int value= t->data;
       //Finish dequeue 
   return value;
   }
   printf("Empty queue");
   return 0;
}*/

