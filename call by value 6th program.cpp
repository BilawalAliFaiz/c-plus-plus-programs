#include<iostream>
using namespace std;
void table(int n);
int main()
{
	int number;
	cout<<"enter a number : ";
	cin>>number;
	table(number);
	
}
void table(int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
	}
}
