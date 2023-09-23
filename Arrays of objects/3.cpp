/*Implement a C++ program to sort an array of objects of a user-defined class based on a specific 
criteria (e.g., age, name)*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Kist{
	private:
		char name[30];
	public:
		void getvalue()
		{
			fflush(stdin);
			cout<<endl<<"Enter name : ";
			cin>>name;
			strlwr(name);
		}
	friend void display(int,Kist[]);
}student[50];
void display(int n,Kist y[])
{
	Kist temp;
	int h=0,j=0,k=0;
	for(h=0;h<n;h++)
	{
		for(j=h+1;j<n;j++)
		{
			k=strcmp(y[h].name,y[j].name);
			if(k>0)
			{
				temp=y[h];
				y[h]=y[j];
				y[j]=temp;
			}
		}
	}
	cout<<endl<<"Name of students in alphabetical order : ";
	for(h=0;h<n;h++)
	{
		cout<<endl<<" "<<y[h].name;
	}
}
int main()
{
	int i=0,num=0;
	cout<<endl<<"Enter the number of students : ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		student[i].getvalue();
	}
	display(num,student);
	return 0;
}
