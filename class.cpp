#include<iostream>
#include<string>
using namespace std;
class student
{
string student_name[20];
int roll_no;
int SAP_ID;
string Specialisation[5];
public:
void Read_data()
{
cout<<"Enter Student's Name"<<endl;
cin.getline(student_name);
cout<<"Enter Roll number of student"<<endl;
cin>>roll_no;
cout<<"Enter SAP_ID of the student"<<endl;
cin>>SAP_ID;
cout<<"Enter the Specialisation of the student"<<endl;
cin.getline(Specialisation);
}
void show()
{
cout<<"Name of the student is "<<student_name<<endl<<"ROll number of the student is "<<roll_no<<endl<<"SAP ID of the student is "<<SAP_ID<<endl<<"Specialisation of the student is "<<Specialisation<<endl;
}
};
int main()
{
cout<<"Hello User!\nThis is the first programme of Classes"<<endl;
student S;
S.Read_data();
S.show();
return 0;
} 








