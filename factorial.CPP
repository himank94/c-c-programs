#include<iostream>
using namespace std;
int main()
{
  int no,f=1,i;
  cout<<"enter no=";
  cin>>no;
  for(i=1;i<=no;i++)
  {
    f=f*i;
  }
  cout<<"the factorial of"<<no<<"is"<<f;
}