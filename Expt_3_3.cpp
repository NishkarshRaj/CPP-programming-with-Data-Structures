#include<iostream>
using namespace std;
class student
{
protected:
string name,rollno,gender;
public:
student()
{
name="Nishkarsh Raj";
rollno="R171217041";
gender="Male";
}
void student_details(string s1,string s2, string s3)
{
name=s1;
rollno=s2;
gender=s3;
}
void display_student_details()
{
cout<<"Details of the student are"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll No: "<<rollno<<endl;
cout<<"Gender: "<<gender<<endl;
}
};
/////////////////////////////////////////
class internal_marks: virtual public student
{
protected:
float marks1[6];
int i;
public:
void get_marks(float m[6])
{
for(i=0;i<6;i++)
{
marks1[i]=m[i];
}
}
void display_marks()
{
cout<<"Lets see the Internal Marks of the student"<<endl;
for(i=0;i<6;i++)
{
cout<<"Marks in subject number "<<i+1<<" are "<<marks1[i]<<endl;
}
}
};
/////////////////////////////////////////
class external_marks: public virtual student
{
protected:
float marks2[6];
public:
int i;
void get_marks(float m[6])
{
for(i=0;i<6;i++)
{
marks2[i]=m[i];
}
}
void display_marks()
{
cout<<"Lets see the External Marks of the student"<<endl;
for(i=0;i<6;i++)
{
cout<<"Marks in subject number "<<i+1<<" are "<<marks2[i]<<endl;
}
}
};
////////////////////////////////////////
class result: public internal_marks,public external_marks
{
public:
float marks[6];
int i;
void display_result()
{
for(i=0;i<6;i++)
{
marks[i]=marks1[i]+marks2[i];
cout<<"Marks in subject "<<i+1<<" out of 100 are "<<marks[i]<<endl;
}
}
};
////////////////////////////////////////
int main()
{
int i;
string name,roll,gender;
cout<<"Program for Student marks calculation"<<endl;
cout<<"Enter the name of the student"<<endl;
getline(cin,name);
cout<<"Enter the roll number of the student"<<endl;
getline(cin,roll);
cout<<"Enter the gender of the student"<<endl;
cin>>gender;
student s;
s.student_details(name,roll,gender);
cout<<"Enter the marks of student in internals 6 subject out of 30"<<endl;
float marks[6],marks1[6];
for(i=0;i<6;i++)
{
cout<<"Enter marks in subject "<<i+1<<endl;
cin>>marks[i];
}
cout<<"Enter the marks of student in Externals 6 subject out of 70"<<endl;
for(i=0;i<6;i++)
{
cout<<"Enter marks in subject "<<i+1<<endl;
cin>>marks1[i];
}
internal_marks i1;
i1.get_marks(marks);
external_marks e;
e.get_marks(marks1);
result r;
////////////////////////////////////
cout<<"Lets see the result of the student"<<endl;
s.display_student_details();
i1.display_marks();
e.display_marks();
r.display_result();
return 0;
}
