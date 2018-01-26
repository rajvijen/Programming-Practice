#include<stdio.h>
//Fibonacci function start from here
int Fib(int N)
{ 
/*1*/   if(N<=1)                           //base case
/*2*/     return 1;
        else
/*3*/     return Fib(N-1) + Fib(N-2);      //recurrence relation
}

//main function start from here
int main()
{ 
  int N;
  printf("Enter any number:");
  scanf("%d",&N);
  printf("Fibonacci series of %d is: %d\t",N, Fib(N));
}
