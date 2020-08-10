#include<iostream>
using namespace std;

int main()
{
	int arr[]={2,12,23,43,45,48,56,59};
	int l=0,r=8,mid,key;
	cout<<"entert the key\n";
	cin>>key;
	bool flag=false; 
	while(l<=r)
	{
		mid=(l+r)/2;
		if(key==arr[mid])
		{	flag=true;		
			cout<<"element is found at "<<mid;
			break;
    		}
		else if(key>arr[mid])
			l=mid+1;
		else if(key<arr[mid])
			r=mid-1;
				
		
	
	}
	if(flag==false)
	cout<<"no is not found \n";

return 0;

}
