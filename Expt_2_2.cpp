#include<iostream>
using namespace std;
class WWE
{
string name;
float salary;
string nickname;
public:
WWE()
{
name="Seth Rollins";
salary=2000000;
nickname="The Architect";
}
~WWE()
{
cout<<"Object Destroyed"<<endl;
}
WWE(string n,float s,string nn)
{
name=n;
salary=s;
nickname=nn;
}
WWE(WWE &x)
{
name=x.name;
nickname=x.name;
salary=x.salary;
}
void show()
{
cout<<"Name is "<<name<<endl<<"Salary is "<<salary<<endl<<"Nickname is "<<nickname<<endl;
}
};
int main()
{
cout<<"WWE class try out";
WWE a;
a.show();
WWE b("AJ Styles",256643532,"Phenomenal");
b.show();
WWE c=b;
c.show();
return 0;
}

