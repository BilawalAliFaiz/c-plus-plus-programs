#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int *ptr=&num;
	cout<<"value of num "<<num<<endl;
	cout<<"adress of num"<<&num<<endl;
	cout<<"pointer (ptr)stores "<<ptr<<endl;
	cout<<"vlue at adress pointer (ptr) is"<<*ptr;
}
