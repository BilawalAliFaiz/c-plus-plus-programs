#include<iostream>
using namespace std;
int main()
{
	int num=5;
	int *ptr= &num;
	*ptr=20;
	cout<<"update value of num is:"<<num<<endl;
	
}

