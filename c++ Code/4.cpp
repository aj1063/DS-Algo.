#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	float a,b,c,r,r1;
	cout<<"Enter a,b,c"<<endl;
	cin>>a>>b>>c;
	r=(-b+sqrt(b*b-4*a*c))/(2*a);
	r1=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"first root is "<<r<<endl;
	cout<<"second rootis "<<r1<<endl;
return 0;
	
}
