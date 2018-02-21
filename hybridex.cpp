#include<iostream>
using namespace std;
class grandmother
{
protected:
string name="Maya Rani Khare";
public:
void show12()
{
cout<<"Name of the grandmother is "<<name<<endl;
}
};
class father: virtual public grandmother
{
protected:
string name="Raj Khare";
public:
void show1()
{
cout<<"Name of the father is "<<name<<endl;
}
};
class mother: public virtual grandmother
{
protected:
string name="Shivanee Kanchan";
public:
void show2()
{
cout<<"Name of the mother is "<<name<<endl;
}
};
class child: public mother,public father
{
protected:
string name;
public:
child(string c)
{
name=c;
}
void show()
{
show12();
show1();
show2();
cout<<"Name of the child is "<<name<<endl;
}
};
int main()
{
cout<<"Code for hybrid level"<<endl;
child nish("Nishkarsh Raj");
nish.show();
cout<<"\n\n\n\n";
cout<<sizeof(grandmother)<<endl;
cout<<sizeof(father)<<endl;
cout<<sizeof(mother)<<endl;
cout<<sizeof(child)<<endl;
return 0;
}
