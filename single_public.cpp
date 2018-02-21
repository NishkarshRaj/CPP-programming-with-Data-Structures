#include<iostream>
using namespace std;
class base 
{
int a;
protected:
int b;
public:
int c;
void set_data(int a1,int b1, int c1)
{
a=a1; b=b1; c=c1;
}
base()
{
a=10; b=15; c=20;
}
};
class derived: public base
{
int a2;
protected:
int b2;
public:
int c2;
derived()
{
a2=5;
b2=6;
c2=10;
}
void show()
{
cout<<"Protected Member of base "<<b<<endl;
cout<<"Public Member of base "<<c<<endl;
cout<<"Private Member of Derived "<<a2<<endl;
cout<<"Protected Member of Derived "<<b2<<endl;
cout<<"Public Member of Derived "<<c2<<endl;
cout<<endl;
}
};
int main()
{
cout<<"Single Level Inheritance with public derivation"<<endl;
derived obj;
obj.show();
obj.set_data(5,14,16);
obj.show();
return 0;
}
/* Note that in public derivations the constructor of the parent class is invoked without even making the object of parent class if the object of the derived class is made because derived class inherits the constructor publically with its values */




