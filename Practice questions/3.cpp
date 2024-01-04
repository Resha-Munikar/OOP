//program to calculate area of rectangle using default arguments
#include<iostream>
using namespace std;
float area(float x=10,float y=5)
{
	return (x*y);
}
int main()
{
	cout<<endl<<"Area: "<<area(10.5);
	cout<<endl<<"Area: "<<area(10.5,5.5);
	cout<<endl<<"Area: "<<area();
	return 0;
}
