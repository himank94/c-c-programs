//ambiguity
#include<iostream>
using namespace std;
class M
{
  protected:
    int m;
  public:
    void display(void)
    {
      cout<<"\nclass M\n";
    }
};
class N
{
  protected:
    int n;
  public:
    void display(void)
    {
      cout<<"\nclass N\n";
    }
};
class P: public M,public N
{
  public:
    void display(void)
    {
      cout<<"\nwelcome\n";
    }
};
int main()
{
  P p;
  p.display();
  p.M::display();
  p.N::display();
}