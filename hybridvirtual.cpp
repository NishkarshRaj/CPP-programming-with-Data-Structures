#include<iostream>
using namespace std; 
class A
{
int a[10];
};
class B1: virtual public A
{
};
class B2: virtual public A
{
};
class B3: virtual public A
{
};
class derived: public B1, public B2, public B3
{
};
int main()
{
derived r;
cout<<"Size of A is "<<sizeof(A)<<endl;
cout<<"size of B1 is "<<sizeof(B1)<<endl;
cout<<"Size of derived is "<<sizeof(r)<<endl;
cout<<endl;
return 0;
}

