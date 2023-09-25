/*Create a C++ program that dynamically allocates an array of integers using new[] and releases 
the memory using delete[].*/
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int num=0,i=0;
	cout<<endl<<"Enter how many numbers do you want : ";
	cin>>num;
	ptr=new int[num];
	for(i=0;i<num;i++)
	{
		cout<<endl<<"Enter number "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<endl<<"Displaying the entered number : ";
	for(i=0;i<num;i++)
	{
		cout<<endl<<" "<<*(ptr+i);
	}
	delete [] ptr;
	return 0;
}
