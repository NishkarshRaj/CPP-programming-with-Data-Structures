#include<iostream>
using namespace std;
class lenght1 //unlike main its not allowed to make variable declarations within member functions/
{
float lenght;
float l1;
public:
lenght1()
{
lenght=100;
l1=50;
}
~lenght1()
{
cout<<"Object Destroyed"<<endl;
}
void setlenght(float l)
{
lenght=l;
}
void convert()
{
if(lenght>12)
{
l1=(int)lenght/12;
lenght=int(lenght)%12; //note that float does not allow mod function to work upon
}
cout<<"Lenght is "<<l1<<" feets and "<<lenght<<" inches"<<endl;
}
};
int main()
{
cout<<"Program to convert Lenght from inches to foot+inches"<<endl;
float l;
cout<<"Enter lenght in inches"<<endl;
cin>>l;
lenght1 obj;
obj.setlenght(l);
obj.convert();
cout<<endl;
return 0;
}
