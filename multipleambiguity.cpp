#include<iostream>
using namespace std;
class A
{
public:
void show(){cout<<"A"<<endl;}
};
class B
{
public:
void show(){cout<<"B"<<endl;}
};
class C: public A,public B
{
public:
void show(){cout<<"C"<<endl;}
};
int main()
{
C nish;
cout<<"Multiple Level Ambiguity Programme"<<endl;
nish.show();
nish.A::show();
nish.B::show();
nish.C::show();
return 0;
}
