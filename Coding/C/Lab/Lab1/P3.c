/*Write a program to read the student information such as roll no., name, srn, sec, ph no, marks, percentage from the user and display it in the same order*/

#include<stdio.h>
int main()
{
  int roll_num, sem;
  float marks;
  double percent;
  long ph_num;
  char sec;
  char name[20];
  printf("enter the roll number and sem = \n");
  scanf("%d %d", &roll_num, &ssem);
  printf("enter the marks = \n");
  scanf("%f", &marks);
  printf("enter the percentage = \n");
  scanf("%lf", &percent);
  printf("enter the phone number = \n");
  scanf("%d", &ph_num);
  printf("enter the section = \n");
  scanf("%c", &sec);
  printf("enter name = \n");
  scanf("%[^/n]s", name);
  printf("roll number = %d", roll_num);
  printf("semester = %d", sem);
  printf("marks = %f", marks);
  printf("percentage = %lf", percent);
  printf("phone number = %ld", ph_num);
  printf("section = %c", sec);
  printf("name = %s", name);
  return 0;
}
