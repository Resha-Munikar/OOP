//Opening and closing a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("my_file.txt",ios::out);
	if(!obj)
	{
		cout<<endl<<"File not created.";
	}
	else
	{
		cout<<endl<<"File created successfully.";
		obj.close();
		
	}
	return 0;
}
