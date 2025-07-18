#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
//	mainpalutor in c++
//	without setw 
	int a=56, b=34, c=89;
	cout<<"the value of a without setw is "<<a<<endl;
	cout<<"the value of b without setw is "<<b<<endl;
	cout<<"the value of c without setw is "<<c<<endl<<endl<<endl;
	
	
//	using setw
    cout<<"the value of a is "<<setw(5)<<a<<endl;
    cout<<"the value of b is "<<setw(5)<<b<<endl;
    cout<<"the value of c is "<<setw(5)<<c<<endl;
}
