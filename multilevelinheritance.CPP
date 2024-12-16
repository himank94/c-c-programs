//wap of multilevel inheritance
#include<iostream>
using namespace std;
class A
{
  private:
    int rollno;
  public:
    void getrollno();
    int putrollno();
};
class B:public A
{
  private:
    int marks;
  public:
    void getmarks();
    int putmarks();
};
class C:public B
{
  public:
    void display();
};
void A::getrollno()
{
  cout<<"\nenter your roll no= ";
  cin>>rollno;
}
int A::putrollno()
{
  return rollno;
}
void B::getmarks()
{
  cout<<"\nenter your marks";
  cin>>marks;
}
int B::putmarks()
{
  return marks;
}
void C::display()
{
  cout<<"\nRoll no = "<<putrollno()<<endl;
  cout<<"\nMarks = "<<putmarks()<<endl;
}
int main()
{
  C c1;
  c1.getrollno();
  c1.getmarks();
  c1.display(); 
}