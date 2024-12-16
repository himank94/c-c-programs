//exception handling
#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter values of a & b= ";
  cin>>a;
  cin>>b;
  int x;
  x=a-b;
  try
  {
    if(x!=0)
    {
      cout<<"\nresult (a/x)= "<<a/x<<endl;
    }
    else
    {
      throw(x);
    }
  }
  catch(int i)
  {
    cout<<"\nexception caught:x= "<<x<<endl;
  }
  cout<<"\nend";
}