#include<iostream.h>
#include<conio.h>

class train
{
  private:
    T train_no;
    T train_name[50],source[50],destination[50];
    T journey_date;
    T capacity;
  public:
    void input_traindata()
    {
      cout<<"\nenter train number= ";
      cin>>train_no;
      cout<<"\nenter train name= ";
      cin>>train_name;
      cout<<"\nenter source= ";
      cin>>source;
      cout<<"\nenter destination= ";
      cin>>destination;
      cout<<"\nenter journey date= ";
      cin>>journey_date;
      cout<<"\nenter capacity= ";
      cin>>capacity;
    }
    void display()
    {
      cout<<"\tTRAIN TICKET"<<endl;
      cout<<"\ntrain number= "<<train_no;
      cout<<"\ntrain name= "<<train_name;
      cout<<"\ntrain source= "<<source;
      cout<<"\ntrain destination= "<<destination;
      cout<<"\njourney date= "<<journey_date;
      cout<<"\ncapacity= "<<capacity;
    }
};
void main()
{
  train a;
  clrscr();
  a.input_traindata();
  clrscr();
  a.display();
  getch();
}