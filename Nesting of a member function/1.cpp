//Program to find largest among 2 numbers
#include<iostream>
using namespace std;
class Number{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<endl<<"Enter first number: ";
			cin>>a;
			cout<<endl<<"Enter second number: ";
			cin>>b;
		}
		int largest()
		{
			if(a>b)
			{
				return a;
			}
			else
			{
				return b;
			}
		}
		void show()
		{
			cout<<endl<<"Largest number: "<<largest();
		}
};
int main()
{
	Number obj;
	obj.getdata();
	obj.show();
	return 0;
}
