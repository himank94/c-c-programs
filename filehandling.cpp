#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf("ITEM");
    cout<<"\nenter item name ";
    char name[30];
    cin>>name;
    outf<<name<<endl;
    cout<<"\nenter item cost";
    float cost;
    cin>>cost;
    outf<<cost<<endl;
    outf.close();
    ifstream inf("ITEM");
    inf>>name;
    inf>>cost;
    cout<<endl;
    cout<<"\nitem name= "<<name<<endl;
    cout<<"\nitem cost= "<<cost<<endl;
    inf.close();
    return 0;
}