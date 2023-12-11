/*Create a class named employee with four data members (ID, name, position and salary) Using member function
initialize the data members for 3 objects and display information of all three of them. Assume appropriate 
data types*/
#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		char name[30];
		char position[30];
		float salary;
	public:
		void get()
		{
			cout<<endl<<"Enter id: ";
			cin>>id;
			fflush(stdin);
			cout<<endl<<"Enter name: ";
			cin>>name;
			cout<<endl<<"Enter position: ";
			cin>>position;
			cout<<endl<<"Enter salary: ";
			cin>>salary;
		}
		void display()
		{
			cout<<endl<<"ID: "<<id;
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Position: "<<position;
			cout<<endl<<"Salary: "<<salary;
		}
};
int main()
{
	Employee a[3];
	int i=0;
	for(i=0;i<3;i++)
	{
		a[i].get();
	}
	for(i=0;i<3;i++)
	{
		a[i].display();
	}
	return 0;
}
