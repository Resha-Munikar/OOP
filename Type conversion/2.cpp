/*Implement a C++ program that uses explicit type conversion to convert a floating-point number 
to an integer.*/
#include<iostream>
using namespace std;
int main()
{
	double a=0,b=0;
	int sum=0;
	cout<<endl<<"Enter a : ";
	cin>>a;
	cout<<endl<<"Enter b : ";
	cin>>b;
	sum=(int)a+b;
	cout<<endl<<"Sum : "<<sum;
	return 0;
}
