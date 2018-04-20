#include<iostream>
#include<fstream>
using namespace std;
class student
{
int roll;
string name;
public:
student()
{
roll=41;
name="Nishkarsh Raj Khare";
}
void insert()
{
cout<<"Lets insert the value"<<endl;
cout<<"Enter the name of the student"<<endl;
getline(cin,name);
cout<<"Enter the roll number of the student"<<endl;
cin>>roll;
}
void show()
{
cout<<"Name of the student is "<<name<<endl;
cout<<"Roll number of the student is "<<roll<<endl;
}
};
int main()
{
cout<<"Binary files with classes"<<endl;
fstream nish1;
nish1.open("classbin.txt",ios::binary|ios::app);
student s1;
s1.insert();
nish1.write((char*)&s1,sizeof(s1));
cout<<"We have written the contents inside the file"<<endl<<"Lets Read it Maaaaaaaaaaaaan"<<endl;
student s2;
nish1.close();
fstream nish2;
int i;
nish2.open("classbin.txt",ios::binary|ios::in);
for(i=0;i<2;i++)
{
nish2.read((char*)&s2,sizeof(s2));
s2.show();
}
cout<<"Goodbye"<<endl;
return 0;
}
