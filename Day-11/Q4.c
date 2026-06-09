//WAP to write function to calculate fact
#include <stdio.h>

long factorial(int n)
{
  int i;
  long fact=1;
  for (i=1;i<=n;i++)
    fact = fact*i;
  return fact;
}
 
int main()
{
  int num;
  printf("enter a number: ");
  scanf("%d",&num);
  printf("factorial of %d = %ld\n",num,factorial(num));
  return 0;
}