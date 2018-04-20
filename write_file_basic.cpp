#include<iostream>
#include<fstream> //both the streams are needed
using namespace std;
int main()
{
ofstream nish("file_write_basic.txt");  //opening with help of constructor
cout<<"Program to enter simple texts into the file"<<endl;
cout<<"Enter your first name, city and pincode "<<endl;
string name;
string city;
int pincode;
getline(cin,name);
getline(cin,city);
cin>>pincode;
nish<<name<<" "<<city<<endl<<pincode;     //How to give space and how to give linefeed!!
cout<<"Written to the file! Now go and check"<<endl;
return 0;
}
