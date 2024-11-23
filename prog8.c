#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union data
{
  char name[30];
  int roll;
  int marks[5];
}student;

void main()
{ int i,sum=0;
  printf("enter your name: ");
  scanf("%s",&student.name);
  printf("enter your roll no");
  scanf("%d",&student.roll);
  printf("enter your marks");
  for(i=0;i<5;i++)
  {
    scanf("%d",&student.marks[i]);
    sum=sum+student.marks[i];
  }

  printf("your percentage is %d",sum/5);

}
