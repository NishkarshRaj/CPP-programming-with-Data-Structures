#include<iostream>
using namespace std;
class time
{
int hours,minutes,seconds;
public:
void gettime()
{
cout<<"Enter hours,minutes and seconds respectively"<<endl;
cin>>hours>>minutes>>seconds;
}
void showtime()
{
cout<<"hours is "<<hours<<endl<<"minutes are "<<minutes<<endl<<"Seconds are "<<seconds;
}
void sum(time,time);
};
void time::sum(time t1,time t2)
{
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=minutes%60;
seconds=t1.seconds+t2.seconds;
}
int main()
{
time t1;
t1.gettime();
t1.showtime();
time t2;
t2.gettime();
t2.showtime();
time t3;
t3.sum(t1,t2);
t3.showtime();
return 0;
}
