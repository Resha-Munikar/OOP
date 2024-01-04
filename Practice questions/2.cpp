//program to compute area of rectangle using inline function
#include<iostream>
using namespace std;
inline void calc(float a,float b)
{
	float area;
	area=a*b;
	cout<<endl<<"Area of a rectangle: "<<area;
}
int main()
{
	float l,b;
	cout<<endl<<"Enter length: ";
	cin>>l;
	cout<<endl<<"Enter breadth: ";
	cin>>b;
	calc(l,b);
	return 0;
}
