#include<iostream>
using namespace std;
void show(int a);
void show(char b);
//void show(float c);
void show(int a)
{
cout<<"Hey! This is for int"<<endl;
}
void show(char b)
{
cout<<"Hey! This is for char"<<endl;
}
/*void show(float c)
{
cout<<"Hey this is for float"<<endl;
}*/
int main()
{
cout<<"Function Overloading"<<endl;
show(1);
show('a');
return 0;
}

