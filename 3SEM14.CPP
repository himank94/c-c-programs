#include<iostream.h>
#include<conio.h>
class line
{
  public:
    void setlength(double len);
    double getlength(void);
    line(double len);
  private:
    int length;
};
line::line(double len)
{
  cout<<"object is being created, length ="<<len;
  length=len;
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
  line l(10);
  cout<<"length="<<l.getlength();
  l.setlength(6);
  cout<<"length="<<l.getlength();
  getch();
}