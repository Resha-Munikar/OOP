//Writing the data provided by user to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	fstream obj;
	obj.open("my_file.txt",ios::out);
	if(!obj)
	{
		cout<<endl<<"File not created.";
	}
	else
	{
		cout<<endl<<"File created successfully.";
		cout<<endl<<"Enter your name:";
		cin.getline(name,50);
		obj<<name;
		obj.close();
	}
	return 0;
}
