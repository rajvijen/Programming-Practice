//Queue inplementation
#include<stdio.h>
#include<stdlib.h>
//queue declaration
struct ArrayQueue 
{ 
  int front,rear;
  int capacity;
  int *array;
};
//create queue
struct ArrayQueue* createQueue(int capacity)
{ 
  struct ArrayQueue* Q=malloc(sizeof(struct ArrayQueue));
  if(!Q) return NULL;
    Q->capacity=capacity;
    Q->front=Q->rear=-1;
    Q->array=malloc(Q->capacity*sizeof(int));
    if(!Q->array)
     return(NULL);
  return(Q);
} 
//is Empty queue?
int isEmptyQueue(struct ArrayQueue *Q)
{ 
  return(Q->front==-1);
}
//is Full queue?
int isFullQueue(struct ArrayQueue *Q)
{ 
  return((Q->rear+1)%Q->capacity==Q->front); 
}
int QueueSize(struct ArrayQueue *Q)
{ 
  return((Q->capacity-Q->front+Q->rear+1)%Q->capacity);
} 
//EnQueue (inserting data in Queue)
void enQueue(struct ArrayQueue *Q, int data)
{
  if(isFullQueue(Q))
     printf("overflow"); 
  else
  { 
    Q->rear=(Q->rear+1)%Q->capacity;
    Q->array[Q->rear]=data;
    if(Q->front==-1)
      Q->front=Q->rear;
  }  
}
//dequeue (Deleting data from Queue)
int deQueue(struct ArrayQueue *Q)
{ 
   int data=-1;
   if(isEmptyQueue(Q))
   { 
     printf("Queue is Empty!");
     return(-1);
   }
   else
   { 
     data=Q->array[Q->front];
     if(Q->front==Q->rear)
        Q->front=Q->rear=-1;
     else
        Q->front=(Q->front+1)%Q->capacity;
   }
   return(data);
}
//Delete Queque
void deleteQueue(struct ArrayQueue *Q)
{ 
  if(Q)
  { 
    if(Q->array)
    {
      free(Q->array);
    }
    free(Q);
  }
}
//menu driven Program
//main function start from here
int main()
{ 
  int data, choice;
  struct ArrayQueue *Q;
  Q=createQueue(5);
  while(1)
  { 
    printf("\n1. Insert(enqueue) data in Queue");
    printf("\n2. Delete(dequeue) data from Queue");
    printf("\n3. Delete Queue");
    printf("\n4. Exit");
    printf("\n Enter your choice");
    scanf("%d",&choice);    
    switch(choice)
    { 
      case 1: printf("\nEnter a Number");
              scanf("%d",&data);
              enQueue(Q,data);
              break;
      case 2: data=deQueue(Q);
              if(data==-1)
                 printf("Queue is Empty!!!");
              else
                 printf("\n Deleted data is %d",data);
              break;
      case 3: deleteQueue(Q);
              break;      
      case 4: exit(0);
              break;
      default:printf("\nInvalid choice");        
    }  
  } 
}
