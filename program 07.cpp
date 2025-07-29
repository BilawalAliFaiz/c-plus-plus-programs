#include <iostream>
using namespace std ;
int main()
{
	int days_of_week ;
	cout<<"enter the number";
	cin>>days_of_week;
	switch (days_of_week)
	{
		case 1:
			cout<<"monday";
			break;
		case 2:
			cout<<"tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;
		case 4:
		    cout<<"thirsday";
			break;
		case 5:
		    cout<<"friday";
			break;
		case 6:
		    cout<<"saturday";
			break;
		case 7:
		    cout<<"sunday";
			break;	
		default :
		    cout<<"invalid data";
		    break;
						
				}
				
	
}
