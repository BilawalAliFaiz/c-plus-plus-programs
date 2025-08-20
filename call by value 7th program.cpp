#include<iostream>
using namespace std;
void value(int);
int main()
{
	int num;
	cout<<"enter a number : ";
	cin>>num;
	value(num);
}
void value(int num)
{
	int a,b;
	a=num+1;
	b=num-1;
	cout<<"the number  after "<<num<<"="<<a<<endl;
	cout<<"the number before "<<num<<"="<<b<<endl;
}

