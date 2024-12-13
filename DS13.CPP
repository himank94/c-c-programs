#include<stdio.h>      //structure of student
#include<conio.h>
struct student
{
  int rollno;
  char name[30];
  char address[50];
};
void main()
{
  struct student s1[20];
  int size,i;
  clrscr();
  printf("\nenter the size=");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    printf("\nenter the student name=");
    scanf("%s",&s1[i].name);
    printf("\nenter the address of student=");
    scanf("%s",&s1[i].address);
    s1[i].rollno=i+1;
  }
  for(i=0;i<size;i++)
  {
    printf("\nrollno=%d",s1[i].rollno);
    printf("\nname of rollno %d is %s",s1[i].rollno,s1[i].name);
    printf("\naddress of rollno %d is %s \n\n",s1[i].rollno,s1[i].address);
  }
  getch();
}