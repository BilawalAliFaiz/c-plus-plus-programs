#include<iostream>
using namespace std; 
int main()
{
	int arr[3]{34,78,56};
	int *ptr=arr;
	for(int i=3;i<3;i++)
	{
		cout<<"element "<<i<<":"<<*(ptr+i)<<endl;
		
	}
}
