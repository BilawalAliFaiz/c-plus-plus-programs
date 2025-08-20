#include<iostream>
using namespace std;
void max(int a,int b);
int main()
{
	int x,y;
	cout<<"enter a number : ";
	cin>>x;
	cout<<"enter a number : ";
	cin>>y;
	max(x,y);
}
void max(int a,int b)
{
	if (a>b)
	{
		cout<<"maximium number is "<<a;
	}
	else 
	cout<<"minimum number is "<<b;
}

