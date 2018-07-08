#include<stdio.h>       //header files
#include<string.h>
int swap(int *x, int *y)  //swapping of two numbers
{ 
 *x = *x^*y;
 *y = *x^*y;
 *x = *x^*y;
 return 0;
}
//perrmutation function
void permutation(char *s, int i, int n)
{ 
 static int count,j;
 if(i == n)
 {
  count++;
  printf("%d(%s)\n",count, s);
 }
 else
 {
  for(j=i;j<n;j++)
  {
   swap((s+i),(s+j));
   permutation(s,i+1,n);
   swap((s+i),(s+j)); 
  }
 }
}
/*same
void permutation(char *s, int begin, int end)
{ 
//int j;
 int range = end-begin;
 if(range == 1)
  printf("str= %s\n",s);
 else
 { 
  for(int j=0;j<range;j++)
  { 
   swap((s+begin),(s+begin+j));
   permutation(s, begin+1, end);
   swap((s+begin),(s+begin+j));
  }
 }
}
*/
//main function start from here
int main()
{ 
 char *str;
 printf("ENter any string:\n");
 gets(str); 
//scanf("%s",str);
 permutation(str, 0, strlen(str)-1);
}
