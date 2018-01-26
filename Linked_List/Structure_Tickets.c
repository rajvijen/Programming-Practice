#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//------------------------------------------------------------------------------
//type of struct define here
typedef struct route
{
 char source;
 float dist;
 float destination;
}ROUTE;
typedef struct detail
{
 ROUTE R;
 int Id;
 int member;
 float cost;
 int class; 
}DETAIL;
//---------------function start from here---------------------------------------
DETAIL *generate_tickets(int n)
{
 DETAIL *Det = (DETAIL *)malloc(n*sizeof(DETAIL));
 if(Det == NULL)
   exit(-1); 
 for(int i=0;i<n;i++)
 {
   Det[i].R.source = (int)rand()%10;
   Det[i].R.dist = rand()%10; 
   Det[i].R.destination = rand()%10;
   Det[i].Id = rand()%10;
   Det[i].member = rand()%10;
   Det[i].cost = rand()%10;
   Det[i].class = rand()%10;
 } 
 return Det;
}
//------------------------------
void Print_tickets(DETAIL *D, int n)
{ 
  DETAIL *Det;
 if(n>0)
 {
   if(Det[n].cost < 1000 )
    
   printf("%c %f %f %d %d %f %d\n",Det[n].R.source, 
   Det[n].R.dist, 
   Det[n].R.destination,
   Det[n].Id, 
   Det[n].member,
   Det[n].cost,
   Det[n].class);
   Print_tickets(D,n-1);
 }
 
 
}
//---------------main function start from here----------------------------------
int main()
{
 DETAIL *D;
 int n=10;
 D = generate_tickets(n);
 Print_tickets(D, n);
 free(D);
 return 0;
}
