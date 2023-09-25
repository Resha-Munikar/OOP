/*Create a C++ program that demonstrates implicit type conversion by adding an integer and a 
floating-point number.*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	float n;
	int sum;
	cout<<endl<<"Enter a positive number : ";
	cin>>num;
	cout<<endl<<"Enter a decimal number : ";
	cin>>n;
	sum=num+n;
	cout<<endl<<"Sum : "<<sum;
	return 0;
}
