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
typedef struct circle
{
 POINT P;
 float r;
}CIRCLE;
//function start from here
//generate circles
CIRCLE *generateCircles(int n)
 {
  CIRCLE *Cir = NULL;  
  Cir = (CIRCLE *)malloc(n*sizeof(CIRCLE)); 
  if(Cir == NULL)
    exit(-1);  
  for(int i=0;i<n;i++)
  {
    Cir[i].P.x = (rand()%10);
    Cir[i].P.y = (rand()%10);
    Cir[i].r = (rand()%10);
  }
    return Cir;
}
//Print circles
 void printCircles(CIRCLE *C, int n)
 {
  printf("X-coordinates  Y-coordinates    radius\n");
  for(int i=0;i<n;i++)
  {
    printf("%1.2f\t\t  %.2f\t\t %.2f\n",C[i].P.x, C[i].P.y, C[i].r);  
  }
 }

//main function start from here  
int main()
{
  CIRCLE *C;
  int n;
  printf("Enter the number of Circles:");
  scanf("%d",&n); 
  printf("Number of Circles are:%d",n);
  C = generateCircles(n);
  printf("\nCircles\n");
  printCircles(C, n); 
  free(C);       //remove garbage collection
  return 0;
}
