#include<iostream>
using namespace std;
class Stack
{
public: //all public needed to access outside in main
string name;
int roll_number;
double total_marks;
Stack *next;
void show()
{
cout<<endl; 
cout<<"Name of the person is "<<name<<endl<<"Roll number of the person is "<<roll_number<<endl<<"Total marks of the person are "<<total_marks<<endl;
}
}*top,*node,*ptr,*p;
int main()
{
int quit=0;
cout<<"Hello! This is a program to demonstrate Stack implementation using Classes and Objects"<<endl;
	node=new Stack;
	cout<<"Enter the name of this person"<<endl;
	cin>>node->name;
	cout<<"Enter the roll number of this person"<<endl;
	cin>>node->roll_number;
	cout<<"Enter the total marks of this person"<<endl;
	cin>>node->total_marks;
	node->next=NULL;
top=node;
node->show();
cout<<endl;
cout<<"Let the party begins"<<endl;
do
{
cout<<"\t\t\t\tOption Menu"<<endl;
cout<<"1) Insert"<<endl;
cout<<"2) Delete"<<endl;
cout<<"3) Show"<<endl;
cout<<"4) Exit"<<endl;
int ch;
cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch)
{
case 1: cout<<"Insertion at end"<<endl;
	p=new Stack;
	cout<<"Enter the name of this person"<<endl;
	cin>>p->name;
	cout<<"Enter the roll number of this person"<<endl;
	cin>>p->roll_number;
	cout<<"Enter the total marks of this person"<<endl;
	cin>>p->total_marks;
	p->next=top;
top=p;
break;
case 2: cout<<"Deletion at End"<<endl;
cout<<"Object to be deleted is"<<endl;
ptr=top;
ptr->show();
top=top->next;
delete ptr;
break;
case 3: cout<<"Traversal"<<endl;
for(ptr=top;ptr!=NULL;ptr=ptr->next)
{
int i=1;
cout<<"The "<<i++<<" Record is of";
ptr->show();
}
break;
case 4: quit=1;
break;
default: cout<<"Wrong Choice! Try again"<<endl;
}
}while(quit!=1);
return 0;
}
