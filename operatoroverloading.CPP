//operator overloading
#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
    void getvalue()
    {
      cout<<"\nenter the two numbers= ";
      cin>>a>>b;
    }
    void operator++()
    {
      a=++a;
      b=++b;
    }
    void operator--()
    {
      a=--a;
      b=--b;
    }
    void display()
    {
      cout<<a<<"\t+\t"<<b<<"i"<<endl;
    }
};
int main()
{
  complex obj;
  obj.getvalue();
  obj.operator++();
  cout<<"\nincrement complex no\n";
  obj.display();
  obj.operator--();
  cout<<"\ndecrement complex no\n";
  obj.display();
} /*
class distance
{
  int feet;
  int inches;
  public:
    distance(int f,int i)
    {
      feet=f;
      inches=i;
    }
    void display()
    {
      cout<<"\nf:"<<feet<<"\ni:"<<inches<<endl;
    }
    distance operator-()
    {
      feet=-feet;
      inches=-inches;
      return distance(feet,inches);
    }
};
void main()
{
  distance d1(11,10),d2(-5,11);
  -d1;
  d1.display();
  -d2;
  d2.display();
  getch();
} */