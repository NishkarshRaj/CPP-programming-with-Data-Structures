#include<iostream>
using namespace std;
class endsem; //forward declaration for friendship
class midsem
{
float Chemistry,Maths,EVS,PDS,DevOps,BEE;
public:
midsem()
{
Chemistry=93;
Maths=81;
EVS=74;
PDS=78;
DevOps=67;
BEE=76;
}
friend void result(midsem,endsem);
};
class endsem
{
float Chemistry,Maths,EVS,PDS,DevOps,BEE;
public:
endsem()
{
Chemistry=91;
Maths=82;
EVS=79;
PDS=77;
DevOps=91;
BEE=77;
}
friend void result(midsem,endsem);
};
void result(midsem M,endsem E)
{
float Chem=(M.Chemistry)/5+(E.Chemistry)/2;
float Math=(M.Maths)/5+(E.Maths)/2;
float Basic=(M.BEE)/5+(E.BEE)/2;
float Env=(M.EVS)/5+(E.EVS)/2;
float CS=(M.PDS)/5+(E.PDS)/2;
float DO=(M.DevOps)/5+(E.DevOps)/2;
cout<<"Final marks in Chemistry are "<<Chem<<" out of 70"<<endl;
cout<<"Final marks in Maths are "<<Math<<" out of 70"<<endl;
cout<<"Final marks in DevOps are "<<Basic<<" out of 70"<<endl;
cout<<"Final marks in PDS are "<<Env<<" out of 70"<<endl;
cout<<"Final marks in EVS are "<<CS<<" out of 70"<<endl;
cout<<"Final marks in BEE are "<<DO<<" out of 70"<<endl;
}
int main()
{
cout<<"This is a program for two classes with a friend function depicting Midsem and Endsem marks respectively"<<endl;
cout<<"Semester 1"<<endl;
midsem M;
endsem E;
result(M,E);
cout<<endl;
return 0;
}
