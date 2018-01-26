//stack implementation with the help of array
#include<stdio.h>    //header files
#include<stdlib.h>
//stack Declaration 
struct ArrayStack
{ 
 int top;
 int capacity;
 int *array;
};
//create stack
struct ArrayStack* createstack(int cap)
{ 
  struct ArrayStack *stack;
  stack = malloc(sizeof(struct ArrayStack));
  stack->top=-1;
  stack->capacity=cap;
  stack->array=malloc(sizeof(int)*stack->capacity);
  return(stack);
}
//check whether stack is Full
int isFull(struct ArrayStack *stack)
{ 
 if(stack->top==stack->capacity-1)
    return(1);
 else
 return(0);   
}
//check whether stack if Empty
int isEmpty(struct ArrayStack *stack)
{ 
  if(stack->top==-1)
    return(1);
  else
    return(0);
}
//Insert(push) in Stack
void push(struct ArrayStack *stack, int item)
{ 
  if(!isFull(stack))
  {
    stack->top++;
    stack->array[stack->top]=item;  
  }
}
//delete/remove(pop) from a stack
int pop(struct ArrayStack *stack)
{
 int item;
 if(!isEmpty(stack))
 { 
   item=stack->array[stack->top];
   stack->top--;
   return(item); 
 }
   return(-1);
}

//menu for program
main()
{ 
  int item, choice;
  struct ArrayStack *stack;  //action statment
//int item, choice;  //Here wrong in C due to above action statment
  printf("Enter number of Stacks:");
  scanf("%d",x);
  stack=createstack(x);
  while(1)          //infinite loop
  { 
    printf("\n1.push");
    printf("\n2.pop");
    printf("\n3.Exit");
    printf("\nEnter your Choice");
    scanf("%d",&choice);
    switch(choice)
    { 
     case 1: printf("\n Enter a Number");
             scanf("%d",&item);
             push(stack, item);
             break;
     case 2: item=pop(stack);
             if(item==-1)
               printf("Stack is Empty");
             else
               printf("\n poped value is %d",item);
             break;
     case 3: exit(0);
    }  
  }
}



