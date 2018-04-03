#include<iostream>
using namespace std;
class student
{
protected:
int rn;
public:
void getn(int a)
{
rn=a;
}
void putn()
{
cout<<"Roll number is "<<rn<<endl;
}
};
class test: public student
{
protected:
float s1,s2;
public:
void getm(float x,float y)
{
s1=x; s2=y;
}
void putm()
{
cout<<"Marks of roll number "<<rn<<endl;
cout<<"Marks in subject 1 are "<<s1<<endl<<"Marks in subject 2 are "<<s2<<endl;
}
};
class result:public test
{
float total;
public:
void display()
{
cout<<"Marks of roll number "<<rn;
total=s1+s2;
putn();
putm();
cout<<"total is "<<total<<endl;
}
};
int main()
{
result r1;
r1.getm(10,20);
r1.getn(41);
r1.display();
return 0;
}
