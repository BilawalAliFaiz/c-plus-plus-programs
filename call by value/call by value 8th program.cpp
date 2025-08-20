#include<iostream>
using namespace std;
void cal(int a,int b,char op);
int main()
{
	int x,y;
	char c;
	cout<<"enter first  number : ";
	cin>>x;
	cout<<"enter opertor :";
	cin>>c;
	cout<<"enter second number : ";
	cin>>y;
	cal(x,y,c);
}
void cal(int a,int b,char op)
{
	switch (op)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<a*b;
			break;
		case '-':
		    cout<<a<<"-"<<b<<"="<<a-b;
			break;
		case '*':
		    cout<<a<<"*"<<b<<"="<<a*b;
			break;
		case '/':
		    cout<<a<<"/"<<b<<"="<<a/b;
			break;
		case '%':
		    cout<<a<<"%"<<b<<"="<<a%b;
			break;
		default:
		    cout<<"invalid opertor";
			break;  		 			
	}
}
