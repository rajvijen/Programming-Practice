#include<stdio.h>
#include<stdlib.h>    //headder files
//Tree (Node) declaration
struct BinaryTreeNode
{ 
 int info;
 struct BinaryTreeNode *left;
 struct BinaryTreeNode *right;
};
//Preorder traversel(Recursive Approach) path=root->left subtree->right subtree
void preOrder(struct BinaryTreeNode *root)
{ 
 if(root)
 { 
  printf("%d",root->info);
  preOrder(root->left);
  priOrder(root->right);
 }
}
//inOrder traversel(Recursive Approach) 
//Path=left subtree->root->right subtree
void inOrder(struct BinaryTreeNode *root)
{ 
 if(root)
 { 
  inOrder(root->left);
  printf("%d",root->info);
  inOrder(root->right);  
 } 
}
//PostOrder traversel(Recursive Approach)
//Path=right subtree->root->left subtree
void inOrder(struct BinaryTreeNode *root)
{ 
 if(root)
 { 
  postOrder(root->right); 
  printf("%d",root->info);
  postOrder(root->left);
 } 
}
//main function start from here
int main()
{ 
 


}
