#include<iostream>
using namespace std;
class human
{
public:
string name;
int age;
string sex;
string DOB;
human *left;  //left child
human *right;  //right child
human()
{
name="Maya Rani Khare";
age=76;
sex="Female";
DOB="18/11/1941";
}
void insert()
{
cout<<"Enter the name of the person"<<endl;
getline(cin,name);
cout<<"Enter the age of the person"<<endl;
cin>>age;
cout<<"Enter the sex of the person"<<endl;
cin>>sex;
cout<<"Enter the DOB of the person"<<endl;
cin>>DOB;
}
void show()
{
cout<<"Name of the person is "<<name<<endl;
cout<<"Age of the person is "<<age<<endl;
cout<<"Sex of the person is "<<sex<<endl;
cout<<"DOB of the person is "<<DOB<<endl;
}
};
int main()
{
human *node,*ptr,*root;
cout<<"Program for Binary Trees"<<endl;
cout<<"Lets enter the root node"<<endl;
node=new human;
node->insert();
node->left=NULL;
node->right=NULL;
root=node;
cout<<"Lets see the root details of the Family"<<endl;
node->show();
return 0;
}


