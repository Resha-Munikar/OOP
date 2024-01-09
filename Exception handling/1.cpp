//Program to divide two numbers
//throws an exception when divisor is 0
#include<iostream>
using namespace std;
int main()
{
	double numerator=0,denominator=0,divide=0;
	cout<<endl<<"Enter numerator: ";
	cin>>numerator;
	cout<<endl<<"Enter denominator: ";
	cin>>denominator;
	try{
		if(denominator==0)
		{
			throw 0;
		}
		divide=numerator/denominator;
		cout<<endl<<numerator<<"/"<<denominator<<"="<<divide;
	}
	catch(int num)
	{
		cout<<endl<<"Error: Cannot divide by "<<num;
	}
	return 0;
}
