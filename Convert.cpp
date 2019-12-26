#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k,count=0;
	cin>>n>>m;
	k=n*m;
	int arr1[n][m];
	int arr2[k];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr1[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr2[count++]=arr1[i][j];
		}
	}
	cout<<"Displaying 2D array\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<arr1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Displaying 1D array\n";
	for(i=0;i<k;i++)
	{
		cout<<arr2[i]<<"\t";
	}
}
