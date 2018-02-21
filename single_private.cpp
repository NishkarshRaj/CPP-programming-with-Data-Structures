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
class derived: private base
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
//cout<<"Protected Member of base "<<b<<endl;
//cout<<"Public Member of base "<<c<<endl;
cout<<"Private Member of Derived "<<a2<<endl;
cout<<"Protected Member of Derived "<<b2<<endl;
cout<<"Public Member of Derived "<<c2<<endl;
cout<<endl;
}
};
int main()
{
cout<<"Single Level Inheritance with private derivation"<<endl;
derived obj;
obj.show();
//obj.set_data(5,14,16);
//obj.show();
return 0;
}


/* Note that in private derivation all the data members and member functions are inheritable yet all are inaccessible as well. The linux CLI also states that the base is an inaccessible in the child class */




