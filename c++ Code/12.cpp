#include<iostream>
#include<math.h>
using namespace std;

int main()
{
float a,b,c,d,r,r1;
cout<<"enter a,b,c"<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d==0)
{
	cout<<"ROOT ARE REAL and equal"<<endl<<-(b)/(2*a);

}
else if(d>0)
{
	cout<<"ROOT ARE REAL and unequal"<<endl<<-(b)+sqrt(d)/(2*a) <<-(b)-sqrt(d)/(2*a);

}
else
cout<<"imaginary";

return 0;

}
