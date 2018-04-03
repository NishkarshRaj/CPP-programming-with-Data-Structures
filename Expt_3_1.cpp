#include<iostream>
using namespace std;
class hydrogen;
class sulphur;
class oxygen;
class oxygen
{
public:
int mass;
oxygen()
{
mass=64;
}
void input(int m)
{
mass=m;
}
friend void empiricalmass(oxygen o,hydrogen h,sulphur s);
};
class hydrogen
{
public:
int mass;
hydrogen()
{
mass=2;
}
void input(int m)
{
mass=m;
}
friend void empiricalmass(oxygen o,hydrogen h,sulphur s);
};
class sulphur
{
public:
int mass;
sulphur()
{
mass=32;
}
void input(int m)
{
mass=m;
}
friend void empiricalmass(oxygen o,hydrogen h,sulphur s);
};
void empiricalmass(oxygen o,hydrogen h,sulphur s)
{
int x,y,z;
float n1,n2,n3;
cout<<"Lets see the masses you have entered"<<endl;
cout<<"Mass of oxygen is "<<o.mass<<endl;
cout<<"Mass of hydrogen is "<<h.mass<<endl;
cout<<"Mass of sulphur is "<<s.mass<<endl;
cout<<"Lets now see the number of moles of all the elements"<<endl;
n1=o.mass/16;
n2=h.mass/1;
n3=s.mass/32;
cout<<"Moles of oxygen are "<<n1<<endl;
cout<<"Moles of hydrogen are "<<n2<<endl;
cout<<"Moles of sulphur are "<<n3<<endl;
cout<<"Now please enter the corrected rounded figures of moles"<<endl;
cout<<"Enter the number of moles of oxygen "<<endl;
cin>>x;
cout<<"Enter the number of moles of hydrogen "<<endl;
cin>>y;
cout<<"Enter the number of moles of sulphur "<<endl;
cin>>z;
cout<<"The Emperical mass of oxygen, hydrogen and sulphur compounds is H"<<y<<"O"<<x<<"S"<<z<<endl;
}
int main()
{
float x,y,z;
cout<<"Program to calculate the emperical formulae and molecular formulae of compound of S,H and O"<<endl;
cout<<"Enter the mass of oxygen in grams"<<endl;
cin>>x;
cout<<"Enter the mass of Hydrogen in grams"<<endl;
cin>>y;
cout<<"Enter the mass of Sulphur in grams"<<endl;
cin>>z;
oxygen o;
o.input(x);
sulphur s;
s.input(z);
hydrogen h;
h.input(y);
empiricalmass(o,h,s);
cout<<"Goodbye"<<endl;
return 0;
}























