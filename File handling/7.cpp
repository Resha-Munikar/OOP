//Writing an object variable into a file 
#include<iostream>
#include<fstream>
using namespace std;
class Employee{
	private:
		int id;
		char name[30];
		int age;
	public:
		void get_data()
		{
			cout<<endl<<"Enter id: ";
			cin>>id;
			fflush(stdin);
			cout<<endl<<"Enter name: ";
			cin.getline(name,30);
			cout<<endl<<"Enter age: ";
			cin>>age;
		}
		void show()
		{
			cout<<endl<<"Id: "<<id;
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Age: "<<age;
		}
};
int main()
{
	Employee obj;
	obj.get_data();
	fstream file;
	file.open("my_file.txt",ios::app);
	if(!file)
	{
		cout<<"No such file.";
	}
	else
	{
		file.write((char*)&obj,sizeof(obj));	
	}
	file.close();
	file.open("my_file.txt",ios::in|ios::binary);
	if(!file)
	{
		cout<<endl<<"No such file";
	}
	else
	{
		file.read((char*)&obj,sizeof(obj));
		obj.show();
		file.close();
	}
	return 0;
}
