#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//-----------------------------------------
//define type of struct variable
typedef struct point
{
  float x;
  float y;
}POINT;

//function start from here
//generate points 
 POINT *generatePoints(int n)
 {
  POINT *P = NULL;  
  P = (POINT *)malloc(n*sizeof(POINT)); 
  if(P == NULL)
    exit(-1);  
  for(int i=0;i<n;i++)
  {
    i[P].x = (rand()%10);
    (P+i) -> y = (rand()%10);
  }
    return P;
}
//Print points
 void printvalues(POINT *P, int n)
 {
  printf("X-coordinates  Y-coordinates\n");
  for(int i=0;i<n;i++)
  {
    printf("%.2f %.2f\n",(P+i)->x,(P+i)->y);  
  }
 }

//main function start from here  
int main()
{
  POINT *P;
  int n=10; 
  P = generatePoints(n);
  printvalues(P, n); 
  free(P);   
  return 0;
}
