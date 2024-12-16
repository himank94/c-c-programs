//function overloading
#include<iostream>
using namespace std;
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
int main()
{
  area a1;
  a1.arears();
  a1.arears(10,20);
}