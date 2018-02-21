#include<iostream>
using namespace std;
class ABC
{
int a,b;
public:
void setdata(int m,int n)
{
a=m,b=n;
}
friend float mean(class ABC x);
};
float mean(ABC x)
{
cout<<(x.a+x.b)/2;
}
int main()
{
int m,n;
ABC y;
cout<<"Enter two values whose mean you want"<<endl;
cin>>m>>n;
y.setdata(m,n);
mean(y);
cout<<endl;
}
