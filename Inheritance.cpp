#include<iostream>
using namespace std;
class WWE
{
int serial;
public:
string name;
float salary;
WWE()
{
serial=1;
name="Finn Balor";
salary=40000;
}
void insert()
{
cout<<"Make the entries of the superstar"<<endl;
cout<<"Enter the serial number of the superstar ";
cin>>serial;
cout<<endl;
cout<<"Enter the name of the superstar ";
cin>>name;
cout<<endl;
cout<<"Enter the salary of the superstar ";
cin>>salary;
cout<<endl;
}
void show()
{
cout<<"Name of the superstar is "<<name<<endl<<"Serial of the superstar "<<serial<<endl<<"Salary of the superstar "<<salary<<endl;
}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////
class record:public WWE
{
string sex;
public:
record()
{
sex="male";
}
void show1()
{
cout<<"Name of the superstar is "<<name<<endl;
cout<<"Win/Loss Record of the Superstar is 80 wins to 6 losses "<<endl;
cout<<"Salary of the superstar is "<<salary<<endl;
cout<<"Sex of the superstar is "<<sex<<endl;
}
};
///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
cout<<"Hello! This is a program depicting Inheritance"<<endl;
WWE nish;
nish.show();
nish.insert();
nish.show();
record nish1;
nish1.show1();
return 0;
}

