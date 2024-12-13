#include<iostream.h>
#include<conio.h>
class ABC;
class XYZ
{
  int x;
  public:
    void setvalue(void)
    {
      cout<<"enter the value of x=";
      cin>>x;
    }
    friend void max(XYZ,ABC);
};
class ABC
{
  int a;
  public:
    void setvalue(void)
    {
      cout<<"enter the value of a=";
      cin>>a;
    }
    friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
  if(m.x>=n.a)
    cout<<m.x;
  else
    cout<<n.a;
}
void main()
{
  ABC abc;
  clrscr();
  abc.setvalue();
  XYZ xyz;
  xyz.setvalue();
  max(xyz,abc);
  getch();
}