#include<iostream>
using namespace std;
class time1
{
int hours,minutes,seconds;
public:
void gettime()
{
cout<<"Enter hours,minutes and seconds respectively"<<endl;
cin>>hours>>minutes>>seconds;
cout<<endl;
}
void showtime()
{
cout<<"hours is "<<hours<<endl<<"minutes are "<<minutes<<endl<<"Seconds are "<<seconds<<endl;
}
void sum(time1,time1);
};
void time1::sum(time1 t1,time1 t2)
{
seconds=t1.seconds+t2.seconds;
minutes=t1.minutes+t2.minutes;
if(seconds>=60)
{
minutes=minutes+(seconds/60);
seconds=seconds%60;
}
hours=t1.hours+t2.hours;
if(minutes>=60)
{
hours=hours+(minutes/60);
minutes=minutes%60;
}
}
int main()
{
time1 t1;
t1.gettime();
t1.showtime();
time1 t2;
t2.gettime();
t2.showtime();
time1 t3;
t3.sum(t1,t2);
t3.showtime();
return 0;
}
