/*Implement a C++ program that allocates memory for a string on the heap using new and 
deallocates it using delete.*/
#include<iostream>
using namespace std;
int main()
{
	char *ptr;
	char string[100];
	ptr=new char[100];
	cout<<endl<<"Enter a string : ";
	gets(string);
	cout<<endl<<"The entered string is : "<<string;
	delete[] ptr;
	return 0;
}
