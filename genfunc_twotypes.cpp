#include<iostream>
using namespace std;
template<typename x,typename y>
void multiply(x x1,y y1)
{
float m;
m=x1*y1;
cout<<"Multiplied value is "<<m<<endl;
}
int main()
{
int x; float y;
cout<<"Enter an integer and then a float value"<<endl;
cin>>x>>y;
multiply(x,y);
return 0;
}
