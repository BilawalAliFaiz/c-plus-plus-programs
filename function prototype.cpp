#include<iostream>
using namespace std;
int sub(int a,int b);
int main()
{
	int num1,num2;
	cout<<"enter first number : ";
	cin>>num1;
	cout<<"enter a second number : ";
	cin>>num2;
	cout<<"subtraction of two number is "<<sub(num1,num2);
//	num1 and num2 are actual parameters
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
//	formal parameter a and b are taking value actual parameter num1 and num2
}
