#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  FILE *fptr;
  clrscr();
  fptr=fopen("text1","a");
  if(fptr==NULL)
  {
    printf("\n unable to write");
  }
  else
  {
    while((ch=getchar())!=EOF)
      fputc(ch,fptr);
    fclose(fptr);
  }
  fptr=fopen("text1","r");
  if(fptr==NULL)
  {
    printf("\nunable to open");
  }
  else
  {
    while((ch=fgetc(fptr))!=EOF)
      putchar(ch);
    fclose(fptr);
  }
  getch();
}