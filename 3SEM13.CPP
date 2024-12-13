#include<iostream.h>
#include<conio.h>
class line
{
  public:
    void setlength(double len);
    double getlength(void);
    line();
  private:
    int length;
};
line::line()
{
  cout<<"object is being created"<<endl;
}
void line::setlength(double len)
{
  length=len;
}
double line::getlength(void)
{
  return length;
}
void main()
{
  line l;
  l.setlength(10);
  cout<<"length="<<l.getlength();
  getch();
}