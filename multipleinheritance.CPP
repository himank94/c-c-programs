//3 wap of multiple inheritance
#include<iostream>
using namespace std;
class M
{
  private:
    int m;
  public:
    int getm()
    {
      m=10;
      return m;
    }
};
class N
{
  private:
    int n;
  public:
    int getn()
    {
      n=20;
      return n;
    }
};
class P: public M,public N
{
  public:
    void display();
};
void P::display()
{
  cout<<"\nM = "<<getm()<<endl;
  cout<<"\nN = "<<getn()<<endl;
  cout<<"\nM * N = "<<getm() * getn()<<endl;
}
int main()
{
  P p;
  p.getm();
  p.getn();
  p.display();
}