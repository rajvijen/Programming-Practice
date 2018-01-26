#include<stdio.h>
int main()
{
  int n = 10;
  int arr[10] = {12,23,34,45,62,10,11,91,33,44};
  int x = 62;  //number which to find
  //print array
  for(int i=0;i<n;i++){ 
   printf("%d ",arr[i]);
  }
  
  //search element from array 
  
  for(int i=0;i<n;i++){ 
  while(i<n && x!=arr[i])
  { 
    int index = 0;
    if(i<=n)
    {
      index = i;
      printf("index = %d ",index);
    }
    else
      index = 0;
      i++;
  }
 } 
}
