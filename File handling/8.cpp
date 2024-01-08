//Writing an array of object into a file
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
			cin.ignore();
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
	Employee obj[3];
	int i=0;
	fstream file;
	file.open("my_file.txt",ios::app);
	if(!file)
	{
		cout<<endl<<"No such file.";
	}
	else
	{
		for(i=0;i<3;i++)
		{
			obj[i].get_data();
		}
		file.write((char*)&obj,sizeof(obj));
		file.close();
	}
	Employee obj1;
	file.open("my_file.txt",ios::in|ios::binary);
	while(file.read((char*)&obj1,sizeof(obj1)))
	{
		obj1.show();
	}
	file.close();
	return 0;
}
