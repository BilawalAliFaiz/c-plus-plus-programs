#include <iostream>
using namespace std;
int main()
{
//	pointer
int a=3;
int* b=&a;
//&...> (adrees of operator)
cout<<"the adress of a is "<<&a<<endl;
cout<<"the adrees of a is "<<b<<endl;

//*......>(value at)defence operator
cout<<"the value at adress b is "<<*b<<endl;
}
