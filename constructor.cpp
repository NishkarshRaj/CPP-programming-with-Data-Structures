#include<iostream>
using namespace std;
class nishkarsh
{
int sapid;
string roll;
public:
nishkarsh(int sap,string rollnum)
{
sapid=sap;
roll=rollnum;
}
void show()
{
cout<<"Sapid is "<<sapid<<endl<<"roll number is "<<roll<<endl;
}
};
int main()
{
nishkarsh nish(500060720,"R171217041");
nish.show();
cout<<endl;
return 0;
}
