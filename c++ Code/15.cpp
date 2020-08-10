#include<iostream>
using namespace std;

int main()
{
cout<<"MENU\n";
cout<<"1. ADD\n"<<"2.sub\n"<<"3.mul\n";
int option,a,b,c;
cin>>a>>b;
cin>>option;
switch(option)
{
 case 1:c=a+b;
	break;
case 2:c=a-b;
	break;
case 3:c=a*b;
	break;
default :
	cout<<"invalid number";
}
cout<<"RESULT is "<<c;
return 0;

}
