#include<iostream>
using namespace std;

int main()
{
int n,r,sum=0,m;
cout<<"enter the numbe\n";
cin>>n;
m=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;


}
cout<<"reverce is "<<sum<<endl;
if(sum==m)
	cout<<"no is phalindrom\n";
else
	 cout<<"not";
return 0;

}
