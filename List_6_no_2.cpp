#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	  cout<<"220130318016";
    cout<<"Vasu Sapariya";
	  string srg;
	  ifstream filestream("test.txt");
	  if(filestream.is_open())
{
		while(getline(filestream,srg))
{
		cout<<srg<<endl;
}
		filestream.close();
}
	else
{
		cout<<"File opening is fail"<<endl;
}
	return 0;
}
