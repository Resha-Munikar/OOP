//Program to read a sentence and count the number of vowels,consotants,words
//space,numbers,special characters
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	int v=0,c=0,sp=0,w=0,n=0,a=0,sc=0;
	obj.open("my_file.txt",ios::in);
	if(!obj)
	{
		cout<<"No such file.";
	}
	else
	{
		char ch;
		while(obj.get(ch))
		{
			cout<<ch;
			if(ch>='0'&&ch<='9')
			{
				n++;
			}
			else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
			{
				a++;
				if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
				{
					v++;
				}
				else
				{
					c++;
				}
			}
			else if(ch==32)
			{
				sp++;
			}
			else
			{
				sc++;
			}
		}
		cout<<endl<<"Vowels: "<<v;
		cout<<endl<<"Consonants: "<<c;
		cout<<endl<<"Numbers: "<<n;
		cout<<endl<<"Space: "<<sp;
		cout<<endl<<"Words: "<<sp+1;
		cout<<endl<<"Special characters: "<<sc;
		cout<<endl<<"Alphabets: "<<a;
		obj.close();
	}
	return 0;
}
