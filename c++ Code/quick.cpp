#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start, int end)
{
    int pivot=arr[end];
    int pindex=start;
    
    for(int i=start; i<end; i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[pindex]);
            pindex++;
        }
    }
    swap(arr[pindex],arr[end]);
    
    return pindex;
}

int quick(int arr[],int start,int end)
{
    if(start<end)
    {
        int pivotindex=partition(arr,start,end);
        quick(arr,start,pivotindex-1);
        quick(arr,pivotindex+1,end);
    }
}

int main() {
	int arr[]={4,7,1,9,8,2};
	//int n=sizeof(arr)/sizeof(arr[0]);
	quick(arr,0,5);
	for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";
    cout<<endl; 
	return 0;
}