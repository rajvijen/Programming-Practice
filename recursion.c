#include<stdio.h>
int PrintDigit(unsigned int K)
{ 
  printf("%d",K);
}

void PrintOut(unsigned int N)
{
  if(N>=10)
     PrintOut(N/10); 
  PrintDigit(N%10);   
}

int main()
{
 int N = 12345;
 PrintOut(N);
}
