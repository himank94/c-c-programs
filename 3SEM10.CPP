#include<iostream.h>
#include<conio.h>
class test
{
  private:
    int code;
    static int count;
  public:
    void setcode(void)
    {
      code=++count;
    }
    void showcode(void)
    {
      cout<<endl<<"object number="<<code<<endl;
    }
    static void showcount(void)
    {
      cout<<endl<<"count="<<count<<endl;
    }
};
int test::count;
void main()
{
  test t1,t2;
  t1.setcode();
  t2.setcode();
  test::showcount();
  test t3;
  t3.setcode();
  test::showcount();
  t1.showcode();
  t2.showcode();
  t3.showcode();
  getch();
}