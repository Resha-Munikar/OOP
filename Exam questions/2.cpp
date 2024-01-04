/*Create a class Student with data members: roll, name, age and address. Use costructor to assign 
values to the data members and write a member function to display the information of students*/
#include<iostream>
using namespace std;
class Student{
	private:
		int roll,age;
		string name;
		string address;
	public:
		Student()
		{
			roll=1;
			age=16;
			name="Resha Munikar";
			address="Kalopul";
		}
		void display()
		{
			cout<<endl<<"Roll number: "<<roll;
			cout<<endl<<"Age: "<<age;
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Address: "<<address;
		}
};
int main()
{
	Student obj;
	obj.display();
	return 0;
}
