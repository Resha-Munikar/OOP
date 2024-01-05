//Writing on a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("my_file.txt",ios::app);
	if(!obj)
	{
		cout<<endl<<"File not created.";
	}
	else
	{
		cout<<endl<<"File created successfully.";
		obj<<"Resha Munikar";
		obj.close();
	}
	return 0;
}
