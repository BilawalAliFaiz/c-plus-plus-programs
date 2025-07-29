#include <iostream>
using namespace std;
int main()
{
//	if else statement
	int age;
	cout<<"tell me your age "<<endl;
	cin>>age;
	if(age<18)
	{
		cout<<"You can't get a car license because you are under 18 years old.";
	}
	else if(age==18)
	{
		cout <<"after one year you can get car license : ";
	}
	else
	{
		cout<<"congratulation you can get car license : ";
	}
}
