#include<iostream>
using namespace std;
char grade(int m);
int  main()
{
	int marks;
	char g;
	cout<<"enter a marks : ";
	cin>>marks;
	g=grade(marks);
	cout<<"your grade is "<<g;
	
}
char grade(int m)
{
	if(m>80)
	
		return 'A';
	else if(m>60&&m<80)
	
		return 'B';
			
	else if (m>40&&m<60)
	
		return 'C';
	
	else 
	return 'D';
	
		
	
}
