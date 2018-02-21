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
class derived: protected base
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
void show1()
{
set_data(5,6,10);
cout<<"Protected Member of base "<<b<<endl;
cout<<"Public Member of base "<<c<<endl;
cout<<"Private Member of Derived "<<a2<<endl;
cout<<"Protected Member of Derived "<<b2<<endl;
cout<<"Public Member of Derived "<<c2<<endl;
}
};
int main()
{
cout<<"Single Level Inheritance with protected derivation"<<endl;
derived obj;
obj.show();
obj.show1();
return 0;
}
/* Note that in protected derivations public and private members are accessible only as protected. That is they can be accessed within child class but not in main with the object. Thats why here we have called set_data function within the derived class and not in main.
"Protected members are like private for a given class" */




