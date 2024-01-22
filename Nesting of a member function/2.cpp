//Program to calculate simple interest
#include<iostream>
using namespace std;
class Interest{
	private:
		int p,t,r;
	public:
		void getdata()
		{
			cout<<endl<<"Enter principle: ";
			cin>>p;
			cout<<endl<<"Enter time: ";
			cin>>t;
			cout<<endl<<"Enter rate: ";
			cin>>r;
		}
		int calc()
		{
			return(p*t*r)/100;
		}
		void show()
		{
			cout<<endl<<"Simple Interest: "<<calc();
		}
};
int main()
{
	Interest obj;
	obj.getdata();
	obj.show();
	return 0;
}
