#include<iostream>
using namespace std;
class A
{
public:
void show(){cout<<"A"<<endl;}
//void show1(){cout<<"A wins"<<endl;}
protected:
void show2(){ cout<<"ADDSA"<<endl;}
};
class B
{
public:
void show(){cout<<"B"<<endl;}
//void show1(){cout<<"B wins"<<endl;}
};
class C: public A,public B
{
public:
void show(){cout<<"C"<<endl;}
};
int main()
{
C nish;
nish.show();
nish.A::show();
nish.B::show();
nish.C::show();
//nish.show1();
nish.A::show2()
return 0;
}
