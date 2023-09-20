//Create an inline function in C++ to find the square of a number and display the result.
#include<iostream>
#include<math.h>
using namespace std;
inline void calc(int n)
{
	int square=0;
	square=pow(n,2);
	cout<<endl<<"Square of given number is : "<<square;
	
}
int main()
{
	int num=0;
	cout<<"Enter a number : ";
	cin>>num;
	calc(num);
}
