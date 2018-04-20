#include<iostream>
#include<fstream>
using namespace std;
int main()
{
cout<<"Binary files!"<<endl;
fstream nish;  //general declaration of logical name 
nish.open("Nishkarsh.txt",ios::binary|ios::out); //explicitly open as out mode to write to the file
//even text files can be written as binary files only defined by the write and read functions
int ch,quit=0,num,k=-1;
do
{
cout<<"1: Enter a number"<<endl;
cout<<"2: Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the number you want to enter to the file"<<endl;
cin>>num;
nish.write((char*)&num,sizeof(num));
break;
case 2: quit=1;
break;
}
k++;
}while(quit!=1);
nish.close();
cout<<"Writing Over! Lets see what you have inserted"<<endl;
fstream nish1;
nish1.open("Nishkarsh.txt",ios::binary|ios::in);
cout<<"There were "<<k<<" insertions"<<endl;
int A[k];
int i;
for(i=0;i<k;i++)
{
nish1.read((char*)&A[i],sizeof(int));
}
for(i=0;i<k;i++)
{
cout<<"The "<<i+1<<" insertion is "<<A[i]<<endl;
}
return 0;
}



