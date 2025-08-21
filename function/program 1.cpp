#include<iostream>
using namespace std;

	int sum(int a,int b)
	{
		int c=a+b;
		return c;
	}
int main()
{
	int num_1,num_2;
	cout<<"enter first number : ";
	cin>>num_1;
	cout<<"enter second number : ";
	cin>>num_2;
	cout<<"sum of two num is "<<sum(num_1,num_2);
}
