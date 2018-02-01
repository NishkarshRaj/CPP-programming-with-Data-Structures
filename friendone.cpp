#include<iostream>
using namespace std;
class ABC
{
int a,b;
public:
void setdata()
{
a=10,b=25;
}
friend float mean(class ABC x);
};
float mean(ABC x)
{
cout<<(x.a+x.b)/2;
}
int main()
{
ABC y;
y.setdata();
mean(y);
}
