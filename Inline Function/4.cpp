//Implement an inline function in C++ to compute the area of a rectangle with user-defined input.
#include<iostream>
using namespace std;
inline void calc(float l,float b)
{
	float area=0;
	area=l*b;
	cout<<endl<<"Area of a rectangle is : "<<area;
}
int main()
{
	float length=0,breadth=0;
	cout<<endl<<"Enter length : ";
	cin>>length;
	cout<<endl<<"Enter breadth : ";
	cin>>breadth;
	calc(length,breadth);
	return 0;
}
