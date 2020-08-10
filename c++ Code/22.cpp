#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int n,r,sum=0,m;
int count=0;
	cout<<"enter the number";
	cin>>n;
	m=n;
	/*while(n>0)
	{
		//r=n%10;
		n=n/10;
		count++;
		
	}
	n=m;
*/
	count=floor(log10(n)+1);
	while(n>0)
	{
		r=n%10;
		sum=sum+pow(r,count);
		n=n/10;
		
	}

	if(sum==m)
		cout<<"no is armstromg\n";
	else
		cout<<"no is not";
return 0;



}
