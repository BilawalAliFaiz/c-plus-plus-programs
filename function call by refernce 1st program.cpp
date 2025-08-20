#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temporary;
	temporary=a;
	a=b;
	b=temporary;
}
//call by refernce
void swap_pointer(int&a,int&b)
{
	int temporary;
	temporary=a;
	a=b;
	b=temporary;
}
int main()
{
	int x=6,z=8;
	cout<<"the value of x is "<<x<<":the value of z is "<<z<<endl;
	swap_pointer(x,z);
	cout<<"the value of x is "<<x<<":the value of z is "<<z<<endl;
	
}

