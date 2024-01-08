//Writing a sentence into a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char str[100];
	fstream obj;
	obj.open("my_file.txt",ios::app);
	if(!obj)
	{
		cout<<"File not created.";
	}
	else
	{
		cout<<"Enter a string: ";
		cin.getline(str,100);
		obj<<str;
		obj.close();
	}
	return 0;
}
