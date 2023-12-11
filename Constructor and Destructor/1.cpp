/*WAP using inheritence to calculate SI and CI. CI will be parent class and SI will be child class.
Both class shoud have paramterized constructor(p,t,r should be passed through parameterized constructor)*/
#include<iostream>
#include<math.h>
using namespace std;
class CI{
	private:
		float p,t,r,result;
	public:
		CI(int a, int b, int c)
		{
			p=a;
			t=b;
			r=c;
			result= p*pow((1+r/100),t);
			cout<<endl<<"Compound Interest: "<<result;
		}
};
class SI: public CI{
	float calc, m, n, o;
	public:
		SI(float x,float y, float z):CI(x,y,z)
		{
			m=x;
			n=y;
			o=z;
			calc=(m*n*o)/100;
			cout<<endl<<"Simple Interest: "<<calc;
		}
};
int main()
{
	float principle,rate ,time;
	cout<<endl<<"Enter principle: ";
	cin>>principle;
	cout<<endl<<"Enter time: ";
	cin>>time;
	cout<<endl<<"Enter rate: ";
	cin>>rate;
	SI obj(principle,time,rate);
	return 0;
}
