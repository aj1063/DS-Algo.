#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[8]{1,4,3,4,5,6,7,8};
    int *p=a,*q=&a[4];
    cout<<q-p<<endl;
    /*for(int i=0; i<8; i++)
    {
        cout<<*p<<endl;
        p++;
    }
    //cout<<*p<<endl;
    */cout<<p<<endl;
    //p++;
    //cout<<*(p+2)<<endl;
    //p--;
    //cout<<*p<<endl;
    //cout<<p+2;
    return 0;


}