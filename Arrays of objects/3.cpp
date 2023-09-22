/*Implement a C++ program to sort an array of objects of a user-defined class based on a specific 
criteria (e.g., age, name)*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Kist{
	private:
		char name[30];
		int age,id;
	public:
		void getvalue()
		{
			fflush(stdin);
			cout<<endl<<"Enter name : ";
			cin>>name;
			strlwr(name);
		}
		void display(int n, Kist x, Kist y[])
		{
			int h,j;
			for(h=0;h<n;h++)
			{
				for(j=h+1;j,n;j++)
				{
					if (strcmp(y[h].name,y[j].name) >0)
					{
						x=y[h];
						y[h]=y[j];
						y[j]=x;
					}
				}
			}
			cout<<endl<<"Details of students in alphabetical order : ";
			for(h=0;h<n;h++)
			{
				cout<<endl<<"Name : "<<y[h].name;
			}
		}
}student[50],temp;
int main()
{
	int i=0,h=0,num=0;
	cout<<endl<<"Enter the number of students : ";
	cin>>num;
	for(i=0;i<num;i++)
	{
		student[i].getvalue();
	}
	student[i].display(num, temp, student);
	return 0;
}
