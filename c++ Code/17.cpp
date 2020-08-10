#include<iostream>
using namespace std;

int main()
{
int year;
cout<<"enter the year\n";
cin>>year;
if(year % 4 == 0)
{
	if(year % 100 == 0)
	{
		if(year % 400 == 0)

			cout<<year<<"year is leap year\n";	
		else 
			cout<<year<<"year is not leap year\n";	
	}	
	else
		cout<<year<<"year is leap year\n";
	
	

}
else
	cout<<"year is not leap year\n";
return 0;


}
