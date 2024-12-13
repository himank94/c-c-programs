//generic function
#include<iostream.h>
#include<conio.h>
template<class T>
void display(T x)
{
  cout<<x<<endl;
}
void main()
{
  clrscr();
  display(1);
  display(2.2);
  display("cdhhv");
  getch();
}