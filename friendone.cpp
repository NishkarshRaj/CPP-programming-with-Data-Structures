#include<iostream>
using namespace std;
class ABC
{
int a,b;
public:
<<<<<<< HEAD
void setdata(int m,int n)
{
a=m,b=n;
=======
void setdata()
{
a=10,b=25;
>>>>>>> 068b4e7f2e1cef66939b6df29e22918251c1370b
}
friend float mean(class ABC x);
};
float mean(ABC x)
{
cout<<(x.a+x.b)/2;
}
int main()
{
<<<<<<< HEAD
int m,n;
ABC y;
cout<<"Enter two values whose mean you want"<<endl;
cin>>m>>n;
y.setdata(m,n);
mean(y);
cout<<endl;
=======
ABC y;
y.setdata();
mean(y);
>>>>>>> 068b4e7f2e1cef66939b6df29e22918251c1370b
}
