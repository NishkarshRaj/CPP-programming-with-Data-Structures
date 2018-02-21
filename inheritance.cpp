#include<iostream>
using namespace std;
class A
{
int a[10]; int c=2;
};
class B: private A
{
int b[10],x=2;
public:
void dis()
{
cout<<x+c;
}
};
class C: private B
{
int c[10];
public:
void show(){
cout<<c+x;
}
};
int main()
{
C nish;
nish.show();
B n;
cout<<n.dis();
cout<<sizeof(C)<<endl;
return 0;
}
