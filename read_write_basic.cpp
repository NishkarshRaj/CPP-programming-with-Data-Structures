#include<iostream>
#include<fstream>
using namespace std;
int main()
{
cout<<"Lets write and read from a file in one go maen!!!!!"<<endl;
ofstream nish("readwrite.txt");
cout<<"Enter your first name, city and Roll number"<<endl;
string name,city;
int roll;
cin>>name>>city>>roll;
nish<<name<<" "<<city<<" "<<roll<<endl;
cout<<"Written to the file maen"<<endl;
nish.close(); //close file to repoen for read mode
//ifstream nish;                         //cannot open same file in the same program in different modes with same logical name
//nish.open("readwrite.txt"); 
ifstream nish1("readwrite.txt");
cout<<"File opened in read mode"<<endl;
string n,c; int r;
nish1>>n>>c>>r;
cout<<"Name is "<<n<<endl<<"city is "<<c<<endl<<"roll number is "<<r<<endl;
cout<<"End of the program"<<endl;
return 0;
}

