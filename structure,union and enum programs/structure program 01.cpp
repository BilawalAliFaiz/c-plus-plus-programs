#include<iostream>
using namespace std;

typedef struct employee
	{
		int eId;
		char favchar;
		float salary;
}ep; 

int main()
{
	ep harry;
	harry.eId=1;
	harry.favchar='c';
	harry.salary=120000;
	cout<<"the value is"<<harry.eId<<endl;
	cout<<"the value is "<<harry.favchar<<endl;
	cout<<"the value is "<<harry.salary;
			}			

