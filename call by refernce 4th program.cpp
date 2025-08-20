#include<iostream>
using namespace std;
void swap(int &x,int &y);
int  main()
{
	int a,b;
	cout<<"enter an enteger : ";
	cin>>a;
	cout<<"enter an enteger : ";
	cin>>b;
	cout<<"value before swaping : ";
	cout<<"\na "<<"="<<a<<endl;
	cout<<"b "<<"="<<b<<endl;
	cout<<" swaping the value \n: ";
	swap(a,b);
	cout<<"value after swaping : ";
	cout<<"\na "<<"="<<a<<endl;
	cout<<"b "<<"="<<b<<endl;	
}
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
	
}

