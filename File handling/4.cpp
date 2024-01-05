//Reading from a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("my_file.txt",ios::in);
	if(!obj)
	{
		cout<<endl<<"No such file.";
	}
	else
	{
		char ch;
		while(1){
			obj>>ch;
			if(obj.eof())
			{
				break;
			}
			cout<<ch;
		}
	}
	return 0;
}
