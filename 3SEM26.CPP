//virtual function
#include<iostream.h>
#include<conio.h>
class A
{
  int x;
  public:
    void getx()
    {
      x=5;
    }
    virtual void display()
    {
      cout<<"\nvalue of x is "<<x<<endl;
    }
};
class B:public A
{
  int y;
  public:
    void gety()
    {
      y=10;
    }
    void display()
    {
      cout<<"\nvalue of y is "<<y<<endl;
    }
};
void main()
{
  clrscr();
  A *a;
  B b;
  a=&b;
  a->getx();
  b.gety();
  a->display();
  b.display();
  getch();
}