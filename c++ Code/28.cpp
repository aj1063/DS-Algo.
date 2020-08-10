#include<iostream>
using namespace std;

int main()
{

	int arr[10],n=10;
	cout<<"enter the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	int key;
	cout<<"enter the key\n";
	cin>>key;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
			cout<<"on "<<i<<"position";
		
	}

return 0;

}
