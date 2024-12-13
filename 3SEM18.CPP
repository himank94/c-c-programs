#include<iostream.h>
#include<conio.h>
class rect
{
  private:
    int length;
    int breadth;
  public:
    rect(int a)
    {
      length=a;
    }
    rect()
    {
      breadth=20;
      cout<<length*breadth;
    }
};
void main()
{
  clrscr();
  rect r1(10);
  rect r2;
  getch();
}