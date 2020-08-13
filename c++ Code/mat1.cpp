#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100],b[100][100],c[100][100]={0};
    int r1,c1,r2,c2,i,j,k;
    cout<<"enter the value for rows and column: ";
    cin>>r1>>c1>>r2>>c2;
    cout<<endl;
    while(c1!=r2)
    {
        cout<<"enter the correct row and colum\n";
        cin>>r1>>c1>>r2>>c2;
         
     }

    if(c1==r2)
    {
        cout<<"Elementfor matrix 1:\n";
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<endl;
        cout<<"Elementfor matrix 2:\n";
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                cin>>b[i][j];
            }
        
        }
        cout<<endl;
        for(int i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                c[i][j]=0;
                for(k=0; k<c2; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

    }



        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
return 0;

}