#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
//create a binary tree for a person having two people he trusts the most starting with yourself
//here left is most trusted and right is second most trusted
class person 
{
public:
int keyid;
string name,gender,contact_number;
person *left;
person *right;
person()
{
name="Nishkarsh Raj Khare";
gender="Male";
contact_number="9005445752";
}
void insert()
{
cout<<"Enter key id of the person"<<endl;
cin>>keyid;
cout<<"Enter name of the person (Only First Name)"<<endl;
cin>>name;
cout<<"Enter the gender of the person"<<endl;
cin>>gender;
cout<<"Enter the contact number of the person"<<endl;
cin>>contact_number;
}
void show()
{
cout<<"The key ID of the person is "<<keyid<<endl;
cout<<"The name of the person is "<<name<<endl;
cout<<"Gender of the person is "<<gender<<endl;
cout<<"Contact number of the person is "<<contact_number<<endl;
}
};
void print_inorder(person *node);
void print_preorder(person *node);
void print_postorder(person *node);
void printlevelorder(person *node);
void printgivenlevel(person *node,int level);
int height(person *node);
void printlevelorder(person *node)
{
int h=height(node);
int i;
for(i=1;i<h;i++)
{
printgivenlevel(node,i);
}
}
int height(person *node)
{
if(node==NULL)
{
return 0;
}
else
{
int lheight,rheight;
if(node->left!=NULL)
{
lheight=height(node->left);
}
if(node->right!=NULL)
{
rheight=height(node->right);
}
if(lheight>rheight)
return(lheight+1);
else
return(rheight+1);
}
}
void printgivenlevel(person *node,int level)
{
if(node==NULL)
{
return;
}
if(level==1)
{
node->show();
}
else if(level>1)
{
printgivenlevel(node->left,level-1);
printgivenlevel(node->right,level-1);
}
}
void print_inorder(person *node)
{
if(node->left!=NULL)
print_inorder(node->left);
node->show();
if(node->right!=NULL)
print_inorder(node->right);
}
void print_preorder(person *node)
{
node->show();
if(node->left!=NULL)
print_preorder(node->left);
if(node->right!=NULL)
print_preorder(node->right);
}
void print_postorder(person *node)
{
if(node->left!=NULL)
print_postorder(node->left);
if(node->right!=NULL)
print_postorder(node->right);
node->show();
}
int main()
{
person *node,*root,*ptr,*p1,*p2;
root=NULL;
int i,quit=0;
char reply;
string name;
cout<<"Welcome to the first ever program of Binary Trees done by Nishkarsh Raj Khare"<<endl;
cout<<"Here you have to create the root of the tree as yourself"<<endl<<"Also, fill the trees with nodes where a node has child as its most trusted contacts where left child is more close to him/her"<<endl;
cout<<"Let us begin! Shall we?? ;) "<<endl;
cout<<"Are you ready?? No I asked you are you ready??????????????"<<endl;
cout<<"Enter your name please"<<endl;
getline(cin,name);
system("clear");
cout<<"Hello Dear "<<name<<endl<<"To enter this creative exercise please type y below"<<endl;
cin>>reply;
if((reply=='y')||(reply=='Y'))
{
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
cout<<"Congratulations! "<<name<<endl<<"You have successfully entered the Tree program execution"<<endl;
do
{
int choice;
cout<<"\n\n\n\t\t\tOptions Menu"<<endl;
cout<<"1) Creation of root"<<endl;
cout<<"2) Insertion of nodes"<<endl;
cout<<"3) Inorder Traversal of nodes"<<endl;
cout<<"4) Preorder Traversal of nodes"<<endl;
cout<<"5) Postorder Traversal of nodes"<<endl;
cout<<"6) Breadth level Traversal of nodes"<<endl;
cout<<"7) Quit"<<endl;
cout<<"Enter your choice"<<endl;
cin>>choice;
switch(choice)
{
case 1: cout<<"Creation of Roots"<<endl;
if(root!=NULL)
{
cout<<"You know that the tree root has already been created but still you wanted to check if I am good enough huh\nYours arms are too short to box with GOD"<<endl;
break;
}
else
{
cout<<"Lets now create the Root node of the Tree"<<endl;
node= new person;
node->insert();
node->left=NULL;
node->right=NULL;
cout<<"Lets See the root of the Tree"<<endl;
node->show();
root=node;
}
break; 
case 2: cout<<"Insertion of nodes"<<endl;
if(root==NULL)
{
cout<<"Root does not exists but you just wanted to act stupid! Please be careful you have to be Good with me"<<endl;
}
else
{
if((root->left==NULL)&&(root->right==NULL))
{
cout<<"Both the left and right sides of the root are free to be filled"<<endl;
}
else if((root->left!=NULL)&&(root->right==NULL))
{
cout<<"Right side of the root is free to be filled"<<endl;
}
else if((root->left==NULL)&&(root->right!=NULL))
{
cout<<"Left side of the root is free to be filled"<<endl;
}
else if((root->left!=NULL)&&(root->right!=NULL))
{
cout<<"Both the sides of root are filled"<<endl;
}
cout<<"Options Menu Part 2"<<endl;
cout<<"1: Insert at Left"<<endl;
cout<<"2: Insert at Right"<<endl;
int cc;
cout<<"Enter your choice"<<endl;
cin>>cc;
system("clear");
switch(cc)
{
case 1: if(root->left!=NULL)
cout<<"Left of the root is filled! Please keep a check"<<endl;
else
{
cout<<"Lets enter the values to the left of root!!"<<endl;
p1=new person;
p1->insert();
p1->left=NULL;
p1->right=NULL;
root->left=p1;
}
break;
case 2:
if(root->right!=NULL)
cout<<"Right of the root is filled! Please keep a check"<<endl;
else
{
cout<<"Lets enter the values to the Right of root!!"<<endl;
p2=new person;
p2->insert();
p2->left=NULL;
p2->right=NULL;
root->right=p2;
}
break;
default: cout<<"Please improve your Eyesight"<<endl;
}
}
break;
case 3: cout<<"Inorder traversal of nodes"<<endl;
if(root==NULL)
{
cout<<"Root does not exists but you just wanted to act stupid! Please be careful you have to be Good with me"<<endl;
}
else
{
print_inorder(root);
}
break;
case 4: cout<<"Preorder traversal of Nodes"<<endl;
if(root==NULL)
{
cout<<"Root does not exists but you just wanted to act stupid! Please be careful you have to be Good with me"<<endl;
}
else
{
print_preorder(root);
}
break;
case 5: cout<<"Postorder traversal of Nodes"<<endl;
if(root==NULL)
{
cout<<"Root does not exists but you just wanted to act stupid! Please be careful you have to be Good with me"<<endl;
}
else
{
print_postorder(root);
}
break;
case 6: cout<<"Breadth level traversal of Nodes"<<endl;
if(root==NULL)
{
cout<<"Root does not exists but you just wanted to act stupid! Please be careful you have to be Good with me"<<endl;
}
else
{
printlevelorder(root);
}
break;
case 7: cout<<"Quitting Now"<<endl;
quit=1;
break;
default: cout<<"Damn! You can't see the choice includes only seven integer number\nNow feel sorry and retry"<<endl;
}
}while(quit!=1);
system("clear");
cout<<"Thats the end of our journey together for now"<<endl;
cout<<"Every Great thing must come to an end"<<endl;
cout<<name<<" You are a great person that you gave so much time to see this work!"<<endl<<"Kindly check www.github.com/NishkarshRaj for more exciting codes"<<endl;
}//end of reply if
else
{
system("clear");
cout<<"You have successfully wasted a chance only rare people get to witness"<<endl;
cout<<"Congratulations for being such a great person"<<endl;
cout<<"Leave now! I can't hold my tears for long now"<<endl;
}
return 0;
}


///////exceptional handling
///////Do Your Work in Typical Graph Form
