#include<iostream>
using namespace std;
class BCA
{
  private:
	  int regno;
	  int age;
  public:
	  void getdata(int a,int b);
	  void putdata(void);
};
void BCA::getdata(int a,int b)
{
  regno=a;
  age=b;
}
void BCA::putdata(void)
{
  cout<<endl<<"the registration no is "<<regno;
  cout<<endl<<"the age is "<<age;
}
int main()
{
  BCA b1,b2;
  cout<<endl<<"object b1"<<endl;
  b1.getdata(123,18);
  b1.putdata();
  cout<<endl<<"object b2"<<endl;
  b2.getdata(245,19);
  b2.putdata();
}