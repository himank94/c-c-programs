//virtual function
#include<iostream>
using namespace std;
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
int main()
{
  A *a;
  B b;
  a=&b;
  a->getx();
  b.gety();
  a->display();
  b.display();
}