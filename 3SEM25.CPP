//function overloading
#include<iostream.h>
#include<conio.h>
class area
{
  private:
    int length;
    int breadth;
  public:
    void arears();
    void arears(int l , int b);
};
void area::arears()
{
  length=10;
  cout<<"\narea of square= "<<length*length;
}
void area::arears(int l , int b)
{

  length=l;
  breadth=b;
  cout<<"\narea of rectangle= "<<length*breadth;
}
void main()
{
  area a1;
  clrscr();
  a1.arears();
  a1.arears(10,20);
  getch();
}