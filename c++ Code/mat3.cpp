#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100];
     int r1,c1,i,j;
     cout<<"enter the value for rows and column: \n";
    cin>>r1>>c1;
    cout<<endl;
     cout<<"enter the elements: \n";
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                cin>>a[i][j];
            }
            cout<<endl;
        
        }

        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}