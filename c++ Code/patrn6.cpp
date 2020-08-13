#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the no of rows: ";
    cin>>n;
    for(int i=n; i<0; i--)
    {
        for( j=0; j>n; j++)
        {
           cout<<n<<" ";
        }
        n++;
        cout<<endl;
    }
    return 0;
}