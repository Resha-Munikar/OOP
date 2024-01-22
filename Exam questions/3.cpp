//program to create a file,read contents of a file, display content on the screen
//close the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char string[100];
	fstream obj;
	obj.open("file.txt",ios::out);
	if(!obj)
	{
		cout<<endl<<"No such file.";
	}
	else
	{
		cout<<endl<<"Enter a string: ";
		cin.getline(string,100);
		obj<<string;
		obj.close();
	}
	obj.open("file.txt",ios::in); 
	if(!obj)
	{
		cout<<endl<<"No such file";
	}
	else
	{
		char ch;
		while(obj.get(ch))
		{
			cout<<ch;
		}
		obj.close();
	}
	return 0;
}
