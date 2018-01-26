#include<stdio.h>       //Header files
#include<stdlib.h>
//declarations of BST
#ifndef _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType X, SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X, SearchTree T); 
searchTree Delete(ElementType X, SearchTree T);
ElementType Retrieve(Position P);

#endif  /* _Tree_H*/
//Place in the implementation file
//structure to make binary search Tree
struct TreeNode
{  
 Elementtype Element;
 SearchTree Left;
 SearchTree Right;
};
//Routine to make an Empty Tree
SearchTree MakeEmpty(SearchTree T)
{ 
 if(T!=NULL)
 { 
  MakeEmpty(T->Left);
  MakeEmpty(T->Right);
  free(T);
 }
 return NULL;
}
//Find operation for Binary Search Tree
Position Find(ElementType X,SearchTree T)
{ 
 if(T==NULL)
   return NULL;
 if(X<T->Element)
   return Find(X,T->Left);  
 else
 if(X>T->Element) 
   return Find(X,T->Right); 
 else
   return T;   
}
//Recursive implementation of FindMin for BST
Position FindMin(SearchTree T)
{ 
 if(T==NULL)
   return NULL:
 else 
 if(T->left==NULL)
   return T;
 else
   return FindMin(T->Left);  
}
//Non-Recursive(Iterative) implementation of FindMax for BST
Position FindMax(SearchTree T)
{ 
 if(T!=NULL)
   while(T->Right!=NULL);
        T=T->Right;
   return T;
}
//Insertion into A BST
SearchTree Insert(ElementType X, SearchTree T)
{ 
 if(T==NULL)
 { 
  /*create and return a one node tree*/       
  T=malloc(sizeof(struct TreeNode));
  if(T==NULL)
    FatalError("Out of Space");
  else
  { 
   T->Element=X;
   T->Left=T->Right=NULL:
  }    
 }
 else 
 if(X<T->Element)      //Insert in Left Subtree
   T->Left=Insert(X, T->Left);
 else
 if(X>T->Right)        //Insert in right Subtree
   T->Right=Insert(X, T->Right);
 /*Else X is in The Tree already;we'll do nothing*/
 
 return T;    //Don't forget this line!!      
}
SearchTree Delete(ElementType , SearchTree T)
{ 
 Position TempCell;
 if(T==NULL)
   Error("element not found!");
 else
 if(X<T->Element)     //Go left
    T->Left=Delete(X,T->Left);
 else
 if(X>T->Right)       //Go Right
    T->Right=Delete(X,T->Right);     
  else  /*Found Element to be Deleted*/
  if(T->Left && T->Right)  //Two Children
  { 
   /*Replace with smallest in right subtree*/
   TempCell=FindMin(T->Right);
   T->Element=TempCell->Element;
   T->Right=Delete(T->Element,T->Right);
  }
  else                    //One or zero children    
  { 
   TempCell=T;
   if(T->Left==NULL)  //also handle zero children
     T=T->Right;
   else if(T->Right==NULL)
     T=T->Left;
   free(TempCell);    
  }
  return T;  
}
int main()
{ 
 



}
