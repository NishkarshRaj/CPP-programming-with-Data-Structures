#include<iostream>
#include<fstream>
using namespace std;
class nishkarsh
{
public:
int roll; //if these are private data members how will they be accessed in main so that they can be stored inside the file??
string name;
void insert(int r,string n)
{
roll=r;
name=n;
}
void show()
{
cout<<"Name is "<<name<<endl<<"Roll number is"<<roll<<endl;
}
};
int main()
{
cout<<"Lets try file handling with C++ classes"<<endl;
nishkarsh n1;
cout<<"Lets write to the file"<<endl;
cout<<"Insert the data as roll number and name"<<endl;
string n;
int r;
cin>>r>>n;
n1.insert(r,n);
n1.show();
cout<<"Class has been created"<<endl;
///////////////////////////
cout<<"Lets create a text file with the data members filling it"<<endl;
ofstream nish1("Class.txt");
nish1<<n1.name<<" "<<n1.roll<<endl;
nish1.close();
////////////////////////////
cout<<"Lets create another object with insertion from file "<<endl;
string n2; int r2;
ifstream nish("Class.txt");
nish>>n2>>r2;
nishkarsh o;
o.insert(r2,n2);
o.show();
///////////////////////////
return 0;
}
