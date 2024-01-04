//program to calculate simple interest
#include<iostream>
using namespace std;
class Base{
	private:
		float p;
	protected:
		float t;
	public:
		float r;
		void getdata()
		{
			cout<<endl<<"Enter principle: ";
			cin>>p;
			cout<<endl<<"Enter time: ";
			cin>>t;
			cout<<endl<<"Enter rate: ";
			cin>>r;
		}
		int getp()
		{
			return p;
		}
};
class Derived:public Base{
	private:
		float si;
	public:
		void calc()
		{
			si=(getp()*t*r)/100;
			cout<<endl<<"Simple Interest: "<<si;
		}
};
int main()
{
	Derived obj;
	obj.getdata();
	obj.calc();
	return 0;
}
