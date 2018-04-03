#include<iostream>
using namespace std;
class location
{
public:
int latitude,longitude;
location()
{
latitude=10;
longitude=25;
}
location(int x,int y)
{
latitude=x;
longitude=y;
}
void show()
{
cout<<"Longitude of the location is "<<longitude<<endl<<"Latitude of the location is "<<latitude<<endl;
}
friend location operator+(location obj1,location obj2);
};
location operator+(location o1,location o2)
{
location temp;
temp.latitude=o1.latitude+o2.latitude;
temp.longitude=o1.longitude+o2.longitude;
return temp;
}
int main()
{
location obj1(10,20),obj2(14,35),obj3;
obj1.show();
obj2.show();
obj3=obj1+obj2+obj30;
obj3.show();
/*obj3=obj3+100;
obj3.show();
obj3=10+obj3;
obj3.show();*/   //not working
return 0;
}

