#include<math.h>
#include<iostream>
using namespace std;
class shape
{
float l,b;
public:
shape()
{
l=10;
b=20;
}
virtual void calculate_area()
{
cout<<"Area of Shape"<<endl;
float area;
area=l*b;
}
void input()
{
cout<<"Who cares"<<endl;
}
};
class rectangle: public shape
{
float l,b;
public:
rectangle()
{
l=15;
b=20;
}
void input(float x,float y)
{
l=x;
b=y;
}
void calculate_area()
{
cout<<"Area of rectangle"<<endl;
float area=l*b;
cout<<"Area of rectangle is "<<area;
}
};
class triangle: public shape
{
float s1,s2,s3;
public:
triangle()
{
s1=3;
s2=4;
s3=5;
}
void input(float x,float y,float z)
{
s1=x;
s2=y;
s3=z;
}
void calculate_area()
{
cout<<"Area of triangle by Heron's Formulae"<<endl;
float area,s,a;
s=(s1+s2+s3)/2;
a=s*(s-s1)*(s-s2)*(s-s3);
area=pow(a,0.5);
cout<<"Area of triangle is "<<area;
}
};
int main()
{
int ch;
shape *p;
rectangle r;
triangle t;
cout<<"Program to enter area of a given shape"<<endl;
cout<<"Option Menu"<<endl;
cout<<"1: Area of Rectangle"<<endl;
cout<<"2: Area of Triangle"<<endl;
cout<<"3: Exit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch)
{
case 1: 
p=&r;
cout<<"Rectangle"<<endl<<"Enter the length and breadth of rectangle"<<endl;
float l,b;
cin>>l>>b;
r.input(l,b);
p->calculate_area();
break;
case 2:
p=&t;
cout<<"Triangle"<<endl<<"Enter three sides of the triangle"<<endl;
float s1,s2,s3;
cin>>s1>>s2>>s3;
t.input(s1,s2,s3);
p->calculate_area();
break;
case 3: cout<<"Exit please"<<endl;
break;
default: cout<<"Wrong Choice"<<endl;
}
cout<<endl;
return 0;
}
///////////////////////////////////Break the walls maen! Note only those functions that are initialized at base as virtual functions can be binded at runtime! Use the pointer with derived only for these functions and not for all.













