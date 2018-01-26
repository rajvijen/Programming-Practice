#include<stdio.h>
#include<stdlib.h>
//Declaration of Structure
struct BSTNode
{ 
 int data;
 struct BSTNode *left;
 struct BSTNode *right;
}
//Find data in Binary Search tree 
struct BSTNode *Find(struct BSTNode *root, int data)
{ 
 if(root==NULL)
   return(NULL);
 if(data<root->data)
   return(Find(root->left,data);
 else if(data>root->right)
        return(Find(root->right,data));
 return(root);         
}
//Insert data in BSTvo
void insert(struct BSTNode *root, int data)
{ 
 struct BSTNode *par; //par just like behave as temp var 
 struct BSTNode *n=malloc(sizeof(struct BSTNode));  
 n->left=NULL;
 n->data=data;
 n->right=NULL;
 
 if(root==NULL)
   root=n;
 else
 {
   par=root;
   while(par!=NULL)
   { 
    if(par->data>data)
    { 
     if(par->left==NULL)
           par->left=n;
       par=par->left;
    } 
    else if(par->data<data)
    { 
     if(par->right==NULL)
           par=>right=n;
       par=par->right;
    }   
   }//end of while loop
 }//end of else 
}
//Deletion in binary search Tree
struct BSTNode *Delete(struct BSTNode *root, int data)
{ 
 struct BSTNode *temp;
 if(root==NULL)
    printf("No such Element Exist!");
 else if(data<root->data)
    root->left=Delete(root->left,data);
 else if(data>root->data)
    root->right=Delete(root->right,data);
 else
 {//Element not found  
  if(root->left && root->right)
  { 
   temp=FindMax(root->left);
   root->data=temp->data;
   root->left=Delete(root->left,root->data);
  }
  else
  {//One or none Element
   temp=root;
   if(root->left==NULL)
      root=root->right;
   if(root->right==NULL)
      root=root->left;
   free(temp);      
  }
 } //end of else        
 return(root);
}//end of function
 
