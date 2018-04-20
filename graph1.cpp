#include<cstdlib>
#include<iostream>
using namespace std;
class student
{
public:
string rollnumber;
string sapid;
string name;
string specialization;
student *connections[10];
student()
{
rollnumber="R171217041";
sapid="500060720";
name="Nishkarsh";
specialization="DevOps";
}
void insert()
{
cout<<"Enter the Registered Roll number of the Student"<<endl;
cin>>rollnumber;
cout<<"Enter the SAP ID of the student"<<endl;
cin>>sapid;
cout<<"Enter the Name(First only) of the Student"<<endl;
cin>>name;
cout<<"Enter the Specialization of the Student"<<endl;
cin>>specialization;
}
void show()
{
cout<<"Roll Number of the student is "<<rollnumber<<endl;
cout<<"Name of the Student is "<<name<<endl;
cout<<"Specialization of the Student is "<<specialization<<endl;
cout<<"SAP ID of the student is "<<sapid<<endl;
}
};
/////////////////////////////////////////////structure for linked list
class stud
{
public:
string name;
stud *next;
};
int main()
{
int n,i,j;
char rep;
cout<<"Hello Everyone!\nThis is the first code of Graph: Unweighted and Undirected Done by Nishkarsh Raj Khare"<<endl;
cout<<"Enter the number of vertices you want in the graph(Make it less than 10)"<<endl;
cin>>n;
int A[10][10]; //Adjancy Matrix
////////////////////////////////////////////////////////////////////////Insertion
if(n<=10)
{
student *stu[n];
for(i=0;i<n;i++)
{
cout<<"Lets make insertion for the "<<i+1<<" student"<<endl;
stu[i]=new student;
stu[i]->insert();
for(j=0;j<10;j++)
stu[i]->connections[j]=NULL;
}
//////////////////////////////////////////////////////////////////////Loading
system("clear");
for(i=0;i<50000;i++)
{
cout<<"Please Wait!!! Loading Boot files of the program into the Active Memory case number "<<i+1<<endl;
if(i<10000)
{
cout<<"Copying files from source location to active memory"<<endl;
}
else if((i>=10000)&&(i<40000))
{
cout<<"Processing the files and Optimising Disk Space"<<endl;
}
else
{
cout<<"File is about to be opened! Brace Yourselves"<<endl;
}
}
system("clear");
//////////////////////////////////////////////////////////////////////Initialize Adjancy Matrix to 2 for general check as 1=true 0=false
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
A[i][j]=2;
}
}
//////////////////////////////////////////////////////////////////////Adjancy Matrix
cout<<"Lets make the adjancy matrix now"<<endl;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(A[i][j]!=1)
		{
		cout<<"If there is a graphical connection between "<<stu[i]->name<<" and "<<stu[j]->name<<"?\nIf yes please enter Y"<<endl;
		cin>>rep; 
			if((rep=='y')||(rep=='Y'))
			{
			A[i][j]=1;
			A[j][i]=1;
			}
			else
			{
			A[i][j]=0;
			}
		}
		else
		{
		continue;
		}
	}//end of for this
}
/////////////////////////////////////////////////////////////creation of adjancy list
stud *node1[10],*p11,*ptr11;
for(i=0;i<n;i++)
{
node1[i]=new stud;
node1[i]->name=stu[i]->name;
node1[i]->next=NULL;
for(j=0;j<n;j++)
{
if((A[i][j]==1)&&(i!=j))
{
p11=new stud;
p11->name=stu[j]->name;
p11->next=NULL;
node1[i]->next=p11;
}
}
}
/////////////////////////////////////////////////////////////creation of connections using adjancy matrix
int k=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(A[i][j]==1)
stu[i]->connections[k++]=stu[j];
}
k=0;
}
/////////////////////////////////////////////////////////////Option Menu
int ch,quit=0; 
char rep11;
system("clear");
do
{
cout<<"Option Menu"<<endl;
cout<<"1: Creation of new vertices"<<endl;
cout<<"2: View Adjancy Matrix"<<endl;
cout<<"3: View Adjancy List"<<endl;
cout<<"4: BFS Traversal"<<endl;
cout<<"5: DFS Traversal"<<endl;
cout<<"6: View all the Vertices"<<endl;
cout<<"7: Quit"<<endl;
cout<<"Enter your choice now"<<endl;
cin>>ch;
switch(ch)
{
case 1:
/////////////////////////////////////////////////////////////Insertion
if(n<=10)
{
cout<<"Creation of new vertex"<<endl;
n=n+1;
stu[n]=new student;
stu[n]->insert();
for(i=0;i<10;i++)
{
stu[n]->connections[i]=NULL;
}
//Adjancy Matrix correction
cout<<"Lets make the adjancy matrix now"<<endl;
for(i=0;i<n;i++)
{
cout<<"Is there a relation between "<<stu[n]->name<<" and "<<stu[i]->name<<"?\nIf yes, press Y"<<endl;
cin>>rep11;
if((rep11=='y')||(rep11=='Y'))
{
A[n][i]=1;
A[i][n]=1;
}
else
{
A[n][i]=0;
}
}
//Adjancy List correction
//connections corrections
}
else
{
cout<<"The maximum limit has been reached! I am extremely sorry but no further insertions now."<<endl;
}
/////////////////////////////////////////////////////////////
break;
case 2:
cout<<"Lets see the Adjancy Matrix shall we"<<endl;
cout<<"Here the indexes are for"<<endl;
for(i=0;i<n;i++)
{	
	cout<<i<<": "<<stu[i]->name<<endl;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<A[i][j]<<"\t";
}
cout<<endl;
}
break;
case 3: 
cout<<"Lets see the adjancy list now"<<endl;
for(i=0;i<n;i++)
{
cout<<"Adjnacy Linked List for "<<stu[i]->name<<" is "<<endl;
for(ptr11=node1[i];ptr11!=NULL;ptr11=ptr11->next)
{
cout<<ptr11->name<<"\t";
}
cout<<endl;
}
break;
case 4:
break;
case 5:
break;
case 6: cout<<"Lets see all the verices now"<<endl;
for(i=0;i<n;i++)
{
cout<<"The Vertex number "<<i+1<<" is:"<<endl;
stu[i]->show();
}
break;
case 7: quit=1;
break;
default: cout<<"Why are we still here! Only to suffer! Please write a numerical integer value between 1 and 7 you stupid idiot"<<endl;
}
cout<<"\n\n\n\n\n\n\n"<<endl;
cout<<"Enter y to clear screen"<<endl;
cin>>rep11;
if((rep11=='y')||(rep11=='Y'))
system("clear");
}while(quit!=1);
/////////////////////////////////////////////////////////////Code above this only
}
else
{
cout<<"I told you to keep it withing 10! Now Goodbye! You don't deserve me"<<endl;
}
system("clear");
return 0;
}
