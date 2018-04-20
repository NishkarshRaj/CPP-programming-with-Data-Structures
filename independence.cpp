#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream nish("Independence.txt");
nish<<"Nishkarsh Raj Khare is the best baaybaaay!!!"<<endl;
cout<<"Text file created"<<endl;
/*ifstream nish("Independence.txt");
string s;
nish>>s;
cout<<"File had "<<s<<endl; */
nish.open("Independence2.txt");
nish<<"ISSS!!!"<<endl;
cout<<"DID IT HAPPEN"<<endl; /////////////// Nope! The above two lines are ignored by the compiler as is becomes confused how the same logical name can be given in the active memory to two different physical files and thus ignores all next work done with the same logical name. We can correct this by closing the first file thus removing it from active memory.
return 0;
}



/////////////////////////
//we can open in read and write mode same file simultaneously using different logical name
//we cannot open both simultaneously in different modes using same logical name
