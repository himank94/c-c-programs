#include<iostream.h>
#include<conio.h>
class rectangle
{
  public:
    rectangle();
  private:
    int length,breadth;
};
rectangle::rectangle()
{
  cout<<"object is being created"<<endl;
  length=10;
  breadth=20;
  cout<<"area= "<<length*breadth;
}
void main()
{
  clrscr();
  rectangle l;
  getch();
}