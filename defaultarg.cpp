#include<iostream>
using namespace std;
float simple_interest(float p,int t,int rate=5);
float simple_interest(float p,int t,int rate)
{
float SI;
SI=(p*rate*t)/100;
return SI;
}
int main()
{
float principal; int time;
cout<<"Default Arguments program"<<endl;
cout<<"Enter principal and time period in rupees and years respectively"<<endl;
cin>>principal>>time;
float Simple=simple_interest(principal,time);
cout<<"Simple interest is "<<Simple<<endl;
return 0;
}

