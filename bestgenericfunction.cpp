#include<cstdlib>
#include<iostream>
using namespace std;
template<typename X>
void sort(X *arr,int size) //generic sort
{
int i,j;
X temp;
	for(i=0;i<size;i++)	
	{
	for(j=0;j<size-1;j++)
	{
		if(arr[j+1]<arr[j])
		{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		}
	}
	}
}
template<typename Y> //generic insertions
void insert(Y *arr,int size)
{
int i;
cout<<"Lets make the insertions now"<<endl;
for(i=0;i<size;i++)
{
cout<<"Enter the "<<i+1<<" element now"<<endl;
cin>>arr[i];
}
}
template<typename Z> //generic display
void display(Z *arr,int size)
{
int i;
cout<<"Sorted array is now being displayed"<<endl;
for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
}
int main()
{
int quit=0,ch,n;
cout<<"Sorting program in Templates"<<endl;
cout<<"Enter the size of the array you want to sort"<<endl;
cin>>n;
int A[n];
float B[n];
char C[n];
do
{
cout<<"Option Menu"<<endl;
cout<<"1: Int array"<<endl;
cout<<"2: Float array"<<endl;
cout<<"3: Character array"<<endl;
cout<<"4: Quit"<<endl;
cout<<"Enter you choice"<<endl;
cin>>ch;
switch(ch)
/*Note that you cannot declare arrays inside switch*/
{
case 1: 
insert(A,n);
sort(A,n);
display(A,n);
break;
case 2:
insert(B,n);
sort(B,n);
display(B,n);
break;
case 3:
insert(C,n);
sort(C,n);
display(C,n);
break;
case 4: quit=1;
break;
default: cout<<"Wrong Choice"<<endl;
}
}while(quit!=1);
return 0;
system("clear");
}
