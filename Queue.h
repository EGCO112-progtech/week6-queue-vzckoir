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
if(q->size==0) q->headPtr=new_node;
 else q->tailPtr=new_node;
 q->tailPtr=new_node;
 q->size++;

}



int dequeue_struct(Queue *q){

  if(q->size>0){
    NodePtr t=q->headPtr;
  if(q->size==0)
   q->headPtr= q->headPtr->nextPtr;
   q->size--;
  } 
 Node* t = q->headPtr;
  if(t){
  int value= t->data;
 free(t);
  return value;
  }
  printf("Empty queue");
  return 0;
}