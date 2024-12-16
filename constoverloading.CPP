#include<iostream>
using namespace std;
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
      length=10;
      breadth=20;
      cout<<length*breadth;
    }
};
int main()
{
  rect r1(10);
  rect r2;
}