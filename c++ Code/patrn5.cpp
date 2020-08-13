#include<bits/stdc++.h>
using namespace std;

int main()
{
    char input, alphbate='A';
    cout<<"Enter the input of last row in uppercase: ";
    cin>>input;
    for(int i=0;i<(input-'A'+1); i++)
    {
        for(int j=0;j<=i; j++)
        {
            cout<<alphbate<<" ";
        }
        cout<<endl;
        alphbate++;
    }
return 0;
}