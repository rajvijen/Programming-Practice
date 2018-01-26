#include<stdio.h>
//function for cubic sum
int Sum(int N)
{ 
  int i, PartialSum;

/*1*/ PartialSum  = 0;
/*2*/ for(i=1; i<=N;i++)      
      { 
/*3*/   PartialSum += i*i*i;      
      }
/*4*/ return PartialSum;
}

//main fuction start from here
int main()
{ 
  int N;
  printf("Enter any Number:");
  scanf("%d ",&N);
  printf("Number is: %d\n",N);
//Sum(N);
  printf("Sum = %d",Sum(N));
}
