/*Write a program to calculate the euclidean distance b/w two points*/

#include<stdio.h>
#include<math.h>
int main()
{
  int x1, y1, x2, y2;
  double d;
  printf("enter the coord of p1 = \n");
  scanf("%d %d", &x1, &y1);
  printf("enter the coord of p2 = \n");
  scanf("%d %d", &x2, &y2);
  d = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  printf("Distance = %lf", d);
  return 0;
}
