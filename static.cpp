#include<iostream>
using namespace std;
class sample
{
int samp;

public://why??
static int sam;
void read()
{
cout<<"Enter the values"<<endl;
cin>>samp>>sam;
}
void sample1()
{
cout<<"Non Static"<<endl<<samp<<endl;
}
static void sample2()
{
cout<<"Static"<<endl<<sam<<endl;
}
};
int sample :: sam; //why?? (2x)
int main()
{
cout<<"Program of static function"<<endl;
sample S;
S.read();
S.sample1();
sample :: sample2();
return 0;
}
