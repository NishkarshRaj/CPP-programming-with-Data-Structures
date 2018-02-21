#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
int i=1;
cout<<"The name of the file is"<<argv[0]<<endl;
while(i<argc)
{
cout<<"The "<<i<<" string is "<<argv[i]<<endl;
i++;
}
return 0;
}
