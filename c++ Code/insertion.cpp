#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n)
{
  int i,j,key;
  for(int i=1; i<n; i++)
  {
      key=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>key)
      {
          arr[j+1]=arr[j];
          j=j-1;
      }
      arr[j+1]=key;
  }
}
int print(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{

int arr[]={3,5,2,7,4};
int n=sizeof(arr)/sizeof(arr[0]);
insertionsort(arr,n);
print(arr,n);
return 0;
}