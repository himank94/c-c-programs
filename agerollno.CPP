#include<iostream>
using namespace std;
class bca
{
  private:
    int age;
    int rollno;
  public:
    void getinfo(int a,int b);
    void putinfo();
};
void bca::getinfo(int a,int b)
{
  age=a;
  rollno=b;
}
void bca::putinfo(void)
{
  cout<<"age="<<age;
  cout<<"rollno="<<rollno;
}
int main()
{
  bca a1,a2;
  a1.getinfo(18,574);
  a1.putinfo();
  a2.getinfo(18,575);
  a2.putinfo();
}