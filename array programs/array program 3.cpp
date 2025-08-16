#include<iostream>
using namespace std;
int main()
{
   int marks[4]={34,23,14,36};
//using while loop:
int i = 0;
  while (i<4)
  {
     cout<<marks[i]<<endl;
     i++;
 }

//using do-while loop:
int a = 0;
  do
  {
     cout<<marks[a]<<endl;
     a++;
 }while(a<4);
}
