#include<iostream>
using namespace std;
class nishkarsh
{
public:
nishkarsh()
{
cout<<"I am constructor"<<endl;
}
~nishkarsh()
{
cout<<"I am Destructor"<<endl;
}
};
int main()
{
cout<<"Constructor vs Destructor programme"<<endl;
cout<<"I am in main"<<endl;
nishkarsh n1;
{
cout<<"I am in main block 1"<<endl;
nishkarsh n2;
{
cout<<"I am in main block 2"<<endl;
nishkarsh n3;
}
cout<<"I am in main block 1"<<endl;
}
cout<<"I am in main"<<endl;
return 0;
}

