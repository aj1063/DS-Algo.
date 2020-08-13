#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[100];
    float sum=0;
    float avg;
    cout<<"enter the no of element: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Element is: ";
        cin>>a[i];
        sum+=a[i];
    }
    avg=(float)sum/n;
    cout<<"Average is "<<avg<<endl;
    return 0;
}