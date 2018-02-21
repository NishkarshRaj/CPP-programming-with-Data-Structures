#include<stdio.h>
#include<string>
class employee
{
	int emp_id;
	string emp_name[20];
	public:
	void read(int a,string n)
	{
		emp_id=a;
		emp_name=n;
	}
	friend void show(employee E);
};
void show(employee E)
{
	cout<<"Name of the employee is "<<emp_name<<endl<<"ID of the employee is "<<emp_id;
}
int main()
{
	employee E;
	E.read(23402,"Nishkarsh Raj Khare");
	show(E);
	return 0;
}
