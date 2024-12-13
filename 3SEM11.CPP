#include<iostream.h>
#include<conio.h>
class employee
{
  private:
    char name[30];
    int age;
  public:
    void getdata(void);
    void putdata(void);
};
void employee::getdata(void)
{
  cout<<endl<<"enter name=";
  cin>>name;
  cout<<endl<<"enter age=";
  cin>>age;
}
void employee::putdata(void)
{
  cout<<endl<<"name="<<name<<endl;
  cout<<endl<<"age="<<age<<endl;
}
const int size=3;
void main()
{
  employee member[size];
  clrscr();
  for(int i=0;i<size;i++)
  {
    cout<<endl<<"details of member "<<i+1<<endl;
    member[i].getdata();
  }
  clrscr();
  for(i=0;i<size;i++)
  {
    cout<<endl<<"member "<<i+1<<endl;
    member[i].putdata();
  }
  getch();
}