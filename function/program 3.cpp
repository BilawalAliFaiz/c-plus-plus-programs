#include<iostream>
using namespace std;
int square(int a)
{
	int c;
	c=a*a;
	return c;
}
int main()
{
	int num1;
	cout<<"enter number :";
	cin>>num1;
	cout<<"square of number is "<<square(num1);
}

