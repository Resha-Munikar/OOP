//array of objects
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Student{
	private:
		char name[30];
		int c,ds,dl;
		float avg;
	public:
		void getdata()
		{
			fflush(stdin);
			cout<<endl<<"Enter name: ";
			gets(name);
			cout<<endl<<"Enter marks in c: ";
			cin>>c;
			cout<<endl<<"Enter marks in ds: ";
			cin>>ds;
			cout<<endl<<"Enter marks in dl: ";
			cin>>dl;
		}
		void average()
		{
			avg=(c+ds+dl)/3;
			cout<<endl<<avg;
		}
};
int main()
{
	Student obj[3];
	int i;
	for(i=0;i<3;i++)
	{
		obj[i].getdata();
	}
	cout<<endl<<"Average marks of students: "<<endl;
	for(i=0;i<3;i++)
	{
		obj[i].average();
	}
	return 0;
}
