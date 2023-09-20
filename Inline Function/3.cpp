//Design a program with an inline function to check if a given number is even or odd.
#include<iostream>
using namespace std;
inline void check(int n)
{
	if(n%2==0)
	{
		cout<<endl<<"Given number is even.";
	}
	else
	{
		cout<<endl<<"Given number is odd.";
	}
}
int main()
{
	int num=0;
	cout<<"Enter a number : ";
	cin>>num;
	check(num);
	return 0;
}
