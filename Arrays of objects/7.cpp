//Program to add numbers of 3 objects
#include<iostream>
using namespace std;
class Demo{
	public:
		int a;
	public:
		void getdata()
		{
			cout<<endl<<"Enter a number: ";
			cin>>a;
		}
		int show(Demo b[])
		{
			int sum=0,i=0;
			for(i=0;i<3;i++)
			{
				sum=sum+b[i].a;		
			}
			return sum;
		}
};
int main()
{
	Demo obj[3];
	int i=0,add=0;
	for(i=0;i<3;i++)
	{
		obj[i].getdata();
	}
	add=obj[0].show(obj);
	cout<<endl<<"Sum: "<<add;
	return 0;
}
