#include<iostream>
#include<fstream>
using namespace std;
int main()
{
cout<<"Taking an entire string from the text file"<<endl;
ofstream nish("string.txt");
nish<<"Nishkarsh Raj Khare is the best in the world."<<endl;
cout<<"Text file is created!"<<endl;
nish.close();
ifstream nish1("string.txt");
string s1;
char s2[50];
nish1>>s1;
cout<<"Simple string intake "<<s1<<endl;
nish1.get(s2,50);   //get function only works with character array and not with strings :O
cout<<"String using get function "<<s2;
return 0;
}
