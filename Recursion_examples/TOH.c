#include<stdio.h>   //header file
//function for solve Tower of Hanoi problem
void TOH(int n, char src, char aux, char dest)
{ 
  if(n>=1)
  { 
    TOH(n-1, src, dest, aux); 
    printf("%d to %d\n",src, dest);
    TOH(n-1, aux, src, dest);
  }
}
//main function-execution start from here
int main(){
  int n;
  printf("Enter number of disc:\n");
  scanf("%d",&n);
  printf("n = %d\n",n); 
  char src, aux, dest;
 //call to recursive function
  TOH(n, src, aux, dest);
}

