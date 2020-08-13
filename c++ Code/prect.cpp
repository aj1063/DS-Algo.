#include<bits/stdc++.h>
using namespace std;

int *fun(int n)
{ 
    int *p = new int[n];
    for(int i=0; i<n; i++)
    {
        p[i] = 5+i;
    }  
    cout<<p<<endl;  
    return p;
    
}
int main()
{
    int *ptr=fun(5);
    cout<<ptr<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<endl;
    }


}