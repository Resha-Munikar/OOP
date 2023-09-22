//Write a C++ program to find the average marks of students stored in an array of Student objects.
#include<iostream>
using namespace std;
class Kist{
	private:
		int eng,math,c,dl,ds;
		float avg_marks;
	public:
		void getvalue()
		{
			cout<<endl<<"Enter marks for eng : ";
			cin>>eng;
			cout<<endl<<"Enter marks for maths : ";
			cin>>math;
			cout<<endl<<"Enter marks  for : ";
			cin>>c;
			cout<<endl<<"Enter marks  for dl : ";
			cin>>dl;
			cout<<endl<<"Enter marks  for ds : ";
			cin>>ds;
		}
		void calc()
		{
			avg_marks=(eng+math+c+dl+ds)/5;
			cout<<endl<<"Average marks : "<<avg_marks;
		}
}student[30];
int main()
{
	int i=0,n=0;
	cout<<endl<<"Enter the number of students : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		student[i].getvalue();
		student[i].calc();
	}
	return 0;
}
