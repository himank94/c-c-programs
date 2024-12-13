#include<iostream.h>
#include<conio.h>
class rectangle
{
  public:
    rectangle(double len , double brth);
    rectangle(const rectangle &l2);
  private:
    int length;
    int breadth;
    int area;
};
rectangle::rectangle(double len,double brth)
{
  cout<<"object is being created"<<endl;
  length=len;
  breadth=brth;
  area=length*breadth;
}
rectangle::rectangle(const rectangle &a)
{
  length=a.length;
  breadth=a.breadth;
  area=a.area;
  cout<<"area is "<<area;
}
void main()
{
  clrscr();
  rectangle l1(10 , 20);
  rectangle l2=l1;
  getch();
}