#include<iostream>
using namespace std;

int main()
{
float tboll;
float dis=0.0;
cout<<"enter the bill\n";
cin>>tboll;

if(tboll>=500)
	dis=tboll*20/100;
else if(tboll>=100 && tboll<500)
	dis=tboll*10/100;

		
cout<<"TOTAL AMOUNT IS "<<tboll<<endl;
cout<<"discount is "<<dis<<endl;
cout<<"discounted amount is "<<tboll-dis<<endl;
return 0;
}
