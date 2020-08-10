#include<iostream>
using namespace std;

int main()
{
int arr[]={2,5,3,7,22,11},max;
max=arr[0];
for(int i=1;i<6;i++)
{
	if(arr[i]>max)
		max=arr[i];

}
cout<<"max is "<<max<<endl;
return 0;




}
