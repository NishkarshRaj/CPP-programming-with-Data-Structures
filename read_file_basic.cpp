#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream nish("file_write_basic.txt");
string name,city;
int pin;
nish>>name>>city>>pin;
cout<<"Lets see what our file had by using a program"<<endl;
cout<<name<<city<<pin;
return 0;
}
