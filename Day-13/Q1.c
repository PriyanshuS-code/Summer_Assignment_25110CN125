//WAP to input and display array
#include<stdio.h>
int main()
{
  int array[7];
  printf("enter 7 integers: ");
  for(int i=0;i<7;i++)
  {
    scanf("%d",&array[i]);
  }
  printf("display array integers: ");
  for(int i=0;i<7;i++)
  {
    printf("%d\n", array[i]);
  }
  return 0;
}