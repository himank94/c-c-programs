#include<iostream>
using namespace std;
int count=0;
class alpha
{
  public:
    alpha()
    {
      count++;
      cout<<"object is being created "<<count<<endl;
    }
    ~alpha()
    {
      cout<<"object is being deleted "<<count<<endl;
      count--;
    }
};
int main()
{
  cout<<"\nenter main objects"<<endl;
  alpha a1,a2,a3,a4;
  {
    cout<<"\nblock 1"<<endl;
    alpha a5;
  }
  {
    cout<<"\nblock 2"<<endl;
    alpha a6;
  }
}