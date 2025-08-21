#include<iostream>
using namespace std;
int prod(int a,int b)
{
	int c=a*b;
	return c;
}
int main()
{
	int num1,num2;
	cout<<"enter  first  number : ";
	cin>>num1;
	cout<<"enter a second number : ";
	cin>>num2;
	cout<<"the prod of two number is "<<prod(num1,num2);
	
}

