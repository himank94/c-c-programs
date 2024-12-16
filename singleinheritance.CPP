#include<iostream>
using namespace std;
class student
{
  private:
    int rollno;
  public:
    int getrollno();
};
class bca : public student
{
  private:
    int marks;
  public:
    void getmarks();
    int getresult();
    void display();
};
int student::getrollno()
{
   rollno=1;
   return rollno;
}
void bca:: getmarks()
{
  cout<<"\nenter the marks=";
  cin>>marks;
  cout<<endl;
}
int bca::getresult()
{
  if(marks>40)
    cout<<"\npass"<<endl;
  else
    cout<<"\nfail"<<endl;
  return 0;
}
void bca::display()
{
  cout<<"\nrollno="<<getrollno()<<endl;
  cout<<"\nmarks="<<marks<<endl;
  getresult();
}
int main()
{
  bca s;
  s.getrollno();
  s.getmarks();
  s.getresult();
  s.display();
}