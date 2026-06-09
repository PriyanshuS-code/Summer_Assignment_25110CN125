//WAP to write function for palindrome
#include<stdio.h>
int check_Palindrome(int num)
{
  int temp,remainder,rev=0;
  temp = num;
  while( num!=0 )
  {
     remainder = num % 10;
     rev = rev*10 + remainder;
     num = num/10;
  }
  if ( rev == temp )
  return 0;
  else
  return 1;
}

int main()
{
  int num;
  printf("enter the number: ");
  scanf("%d",&num);
  if(check_Palindrome(num) == 0)
  printf("%d is a palindrome number.\n",num);
  else
  printf("%d is not a palindrome number.\n",num);
  return 0;
}
