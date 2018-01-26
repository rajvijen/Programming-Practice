#include<stdio.h>
//factorial function start from here
int Factorial(int N)
{
  if(N<=1)
    return 1;
  else 
    return N*Factorial(N-1);
}
//main function start from here
int main()
{
  int N;
  printf("Enter any nummber");
  scanf("%d",&N);
  printf("Factorial of %d is: %d\n",N,Factorial(N));
}
