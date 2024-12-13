#include<iostream.h>
#include<conio.h>
class circle
{
  private:
    int radius;
  public:
    void area(int a);
    void circumf(int b);
};
void circle::area(int a)
{
  radius=a;
  cout<<endl<<"the area of "<<radius<<" is "<<3.14 * radius * radius;
}
void circle::circumf(int b)
{
  radius=b;
  cout<<endl<<"the circum of "<<radius<<" is "<<2 * 3.14 *radius;
}
void main()
{
  circle c1,c2;
  clrscr();
  c1.area(6);
  c1.circumf(6);
  c2.area(7);
  c2.circumf(7);
  getch();
}