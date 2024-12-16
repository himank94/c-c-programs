//generic function
#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
  cout<<x<<endl;
}
int main()
{
  display(1);
  display(2.2);
  display("cdhhv");
}