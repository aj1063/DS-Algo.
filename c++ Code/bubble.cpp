#include<bits/stdc++.h>
#include<vector>

using namespace std;
void bubble(vector<int>&A, int n)
{
    for(int i=0; i<n-1; i++)
    {   
        bool swapped=false;

        for(int j=0; j<n-i-1; ++j)
        {
            
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
            swapped=true;
        }
        if(!swapped)
        break;
    }
}
int main()
{
    vector<int>A={6,7,4,3,89,1,0};
    int n=7;
    bubble(A,n);
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";
 
    return 0;
}