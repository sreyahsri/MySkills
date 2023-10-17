/*Write a C program to find area of triangle if three sides are given*/

#include<stdio.h>
#include<math.h>

int main()
{
  double a,b,c,s,area;
  printf("enter the three sides of a triangle:");
  scanf("%lf %lf %lf", &a, &b, &c);
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of triangle = %lf", area);
  return 0;
}
