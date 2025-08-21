#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temporary;
	temporary=a;
	a=b;
	b=temporary;
}
int main()
{
	int x=4;int y=7;
//	cout<<"sum of a and b is : ="<<sum(a,b);
cout<<"the value of x  is  "<<x<<": the value of y is "<<y<<endl;
swap(x,y);
cout<<"the value of x  is  "<<x<<": the value of y is "<<y<<endl;
}
