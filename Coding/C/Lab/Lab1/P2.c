/*Write a program to swap two variables using another variable*/

#include<stdio.h>
int main()
{
  int a; int b; int c;
  printf("Enter two integers: \n");
  scanf("%d %d", &a, &b);
  printf("a=%d" "b=%d", a,b);
  c=a;
  a=b;
  b=c;
  printf("a=%d " "b=%d ",a,b);
  return 0;
}
