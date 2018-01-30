#include<iostream>
using namespace std;
class Nish
{
int sapid=500060720;
string roll="R171217041";
string name="Nishkarsh Raj Khare";
void show()
{
cout<<"The sapid is "<<sapid<<endl<<"Roll number is "<<roll<<endl;
}
public:
void nothing();
void display()
{
cout<<"This is a public function maen"<<endl;
show();
}
};
void Nish:: nothing() 
{
cout<<"Resolution baybeeee"<<endl;
}
int main()
{
Nish n;
n.display();
n.nothing();
cout<<endl;
return 0;
}

