#include<iostream>
using namespace std;
void show1();
inline void show2();
void show1()
{
cout<<"Not inline"<<endl;
}
inline void show2()
{
cout<<"Inline"<<endl;
}
int main()
{
cout<<"Lets do inline vs non inline maen"<<endl;
show1();
//show2();
return 0;
}
