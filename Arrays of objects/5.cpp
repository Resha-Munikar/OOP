#include<iostream>
using namespace std;
class First{
	private:
		int a;
	public:
		void getvalue()
		{
			cout<<"Enter a: ";
			cin>>a;
		}
		friend void test(First[]);
};
void test(First m[])
{
	int i=0,sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+m[i].a;
	}
	cout<<endl<<"Sum = "<<sum;
}
int main()
{
	int j=0;
	First x[3];
	for(j=0;j<3;j++)
	{
		x[j].getvalue();
	}
	test(x);
	return 0;
}
























