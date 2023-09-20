//Write a C++ program to calculate the factorial of a number using an inline function.
#include<iostream>
using namespace std;
inline void display(int n)
{
	int i=0,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<endl<<"Factorial : "<<fact;
}
int main()
{
	int num=0;
	cout<<"Enter a positive number : ";
	cin>>num;
	display(num);
	return 0;
}
	

