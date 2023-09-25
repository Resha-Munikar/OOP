/*Write a C++ program that dynamically allocates memory for an integer using the new operator 
and then frees it using the delete operator.*/
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	float *p;
	int num=0;
	float n=0;
	ptr=new int;
	p=new float;
	cout<<endl<<"Enter a postive number : ";
	cin>>num;
	cout<<endl<<"Enter a decimal number : ";
	cin>>n;
	cout<<endl<<"Positive number : "<<num;
	cout<<endl<<"Decimal number : "<<n;
	delete ptr;
	delete p;
	return 0;
}
