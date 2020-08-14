#include<bits/stdc++.h>
using namespace std;

void mergsort(int arr[],int l,int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++)
    {
        L[i]=arr[i+1];
    }
    for(int j=0; j<n2; j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=1;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;

        }
        else{
            arr[k]=R[j];
            j++;

        }
        while(i<n1)
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }

}
void merg(int arr[],int l, int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        merg(arr,l,m-1);
        merg(arr, m+1,r);
        mergsort(arr,l,m,r);
    }
}
void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 int mai()
{
    int arr[]={4,2,6,22,75,34,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    merg(arr,0,n-1);
    print(arr,n);
    return 0;

}