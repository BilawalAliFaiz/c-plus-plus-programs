#include<iostream>
using namespace std;
union money
{
	int rice;
	char car;
	float pounds;
	
};
int main()
{
	union money m1;
	m1.rice=45;
	m1.car='c';
	cout<<"the price is : "<<m1.rice<<endl;
	cout<<"the value is : "<<m1.car;
}
