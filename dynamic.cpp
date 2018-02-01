#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int;
*p=100;
cout<<"Value to which p points is "<<*p;
cout<<endl;
delete(p);
cout<<"Value to which p static points is "<<*p;
cout<<endl;
return 0;
}


