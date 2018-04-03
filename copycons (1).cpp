#include<iostream>
using namespace std;
class nishkarsh
{
int sapid;
public:
nishkarsh()
{
sapid=500060720;
}
nishkarsh(nishkarsh &x)
{
sapid=x.sapid;
}
void show()
{
cout<<sapid<<endl;
}
};
int main()
{
cout<<"Copy Constructor Program"<<endl;
nishkarsh n;
n.show();
nishkarsh x(n);
x.show();
return 0;
}
