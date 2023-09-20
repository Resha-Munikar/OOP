/*Create a C++ class Student with data members for name, roll number and marks. Create
an array of student object and display their details.*/
#include<iostream>
using namespace std;
class Student{
	private:
		char name[30];
		int roll;
		int marks;
	public:
		void getvalue()
		{
			fflush(stdin);
			cout<<endl<<"Enter student's name : ";
			gets(name);
			cout<<endl<<"Enter student's roll number : ";
			cin>>roll;
			cout<<endl<<"Enter student's marks : ";
			cin>>marks;
		}
		void showvalue()
		{
			cout<<"  "<<roll;
			cout<<"  "<<marks;
			cout<<"  "<<name;
			cout<<endl;
		}
}obj[2];
int main()
{
	int i=0;
	for(i=0;i<2;i++)
	{
		obj[i].getvalue();
	}
	cout<<"Students Details :"<<endl;
	for(i=0;i<2;i++)
	{
		obj[i].showvalue();
	}
	return 0;
}
