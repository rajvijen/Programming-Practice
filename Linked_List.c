#include<stdio.h>
#include<stdlib.h>     //header files
struct node            //Node declaration 
{ 
 int info;
 struct node *link;
};
struct node *START=NULL;  
//create Nodes
struct node* createNode()
{ 
 struct node *n=(struct node *)malloc(sizeof(struct node));
 return(n);
}
//insert nodes in List
void insertNode()
{
 struct node *temp,*t;
 temp=createNode();
 printf("Enter a number");
 scanf("%d",&temp->info);
 temp->link=NULL;
 if(START==NULL) 
   START=temp;
 else
 { 
  t=START;
  while(t->link!=NULL)
  {
   t=t->link;   
  }
   t->link=temp;          
 }  
} 
//Delete  first Node from List
void deleteNode()
{ 
 struct node *r;
//r=createNode(); 
 if(START==NULL)
   printf("List is Empty");
 else
 {
  r=START;
  START=START->link;
  free(r);
 }the
}   //Here r automatically destroy due to Local scope
//Traverse Nodes
void viewList()
{ 
 struct node *t;
//t=START;   ----> my mistake
 if(START==NULL)
   printf("List is Empty");
 else
   t=START;
   while(t!=NULL)
   { 
    printf("%d",t->info);
    t=t->link;
   }
} 
int menu()
{ 
 int ch;
 printf("\n1. Add value to the List");
 printf("\n2. Delete first value");
 printf("\n3. View List");
 printf("\n4. Exit\n");
 scanf("%d",&ch);
 return(ch);
}
//main function start from here
void main()
{ 
 while(1)    //infinite loop
 { 
  switch(menu())
  { 
   case 1: insertNode();   
            break;
   case 2: deleteNode();
            break;
   case 3: viewList();
            break;
   case 4: exit(0);
            break;
   default: printf("Invalid Choice");                        
  }  
 }
}
