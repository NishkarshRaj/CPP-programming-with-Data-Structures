#include<iostream>
using namespace std;
class location
{
int latitude,longitude;
public: location()
{
latitude=25;
longitude=20;
}
location(int x,int y)
{
latitude=x;
longitude=y;
}
void show()
{
cout<<"Latitude of the location is "<<latitude<<endl<<"Longitude of the location is "<<longitude<<endl;
}
location operator+(location obj);
};
location location::operator+(location obj)
{
location temp;
temp.latitude=obj.latitude+latitude;
temp.longitude=obj.longitude+longitude;
return temp;
}
int main()
{
location obj1(10,20),obj2(25,13),obj3;
obj1.show();
obj2.show();
obj3=obj1+obj2;
obj3.show();
return 0;
}
