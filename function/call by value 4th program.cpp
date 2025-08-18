#include<iostream>
using namespace std;
int factorial (int n)
{
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int num=5;
	cout<<"factorial of "<<num<<"="<<factorial(num)<<endl;
	cout<<"original num ="<<num;
}
