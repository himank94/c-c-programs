#include<iostream.h>
#include<conio.h>
class rectangle
{
  public:
    rectangle(double len,double brth);
  private:
    int length;
    int breadth;
};
rectangle::rectangle(double len,double brth)
{
  cout<<"object is being created"<<endl;
  length=len;
  breadth=brth;
  cout<<"area= "<<length*breadth;
}
void main()
{
  clrscr();
  rectangle l(10 , 20);
  getch();
}