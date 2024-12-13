#include<iostream.h>
#include<conio.h>
class item
{
  private:
    static int count;
    int number;
  public:
    void getdata(int a);
    void getcount(void);
};
void item::getdata(int a)
{
  number=a;
  count++;
}
void item::getcount(void)
{
  cout<<"count=";
  cout<<count<<endl;
}
int item::count;
void main()
{
  item a,b,c;
  a.getcount();
  b.getcount();
  c.getcount();
  a.getdata(100);
  b.getdata(200);
  c.getdata(300);
  a.getcount();
  b.getcount();
  c.getcount();
  getch();
}