//wap of hybrid inheritance
#include<iostream.h>
#include<conio.h>
class student
{
  private:
    int rollno;
  public:
    void getrollno();
    int putrollno();
};
class subject:public student
{
  protected:
    int sub1 , sub2;
  public:
    void getmarks();
    int putmarks();
};
class sports
{
  private:
    int grades;
  public:
    void getgrades();
    int putgrades();
};
class result:public subject , public sports
{
  public:
    void display();
};
void student::getrollno()
{
  cout<<"\nenter your rollno= ";
  cin>>rollno;
}
int student::putrollno()
{
  return rollno;
}
void subject::getmarks()
{
  cout<<"\nenter your marks of oops = ";
  cin>>sub1;
  cout<<"\nenter your marks of caal = ";
  cin>>sub2;
}
int subject::putmarks()
{
  return sub1;
  return sub2;
}
void sports::getgrades()
{
  cout<<"\nenter your sports grades = ";
  cin>>grades;
}
int sports::putgrades()
{
  return grades;
}
void result::display()
{
  cout<<"\nrollno = "<<putrollno()<<endl;
  cout<<"\nmarks of oops = "<<sub1<<endl;
  cout<<"\nmarks of caal = "<<sub2<<endl;
  cout<<"\ngrades of sports = "<<putgrades()<<endl;
  cout<<"\ntotal marks = "<<sub1+sub2+putgrades()<<endl;
}
void main()
{
  clrscr();
  result r1;
  r1.getrollno();
  r1.getmarks();
  r1.getgrades();
  clrscr();
  r1.display();
  getch();
}