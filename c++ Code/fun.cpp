#include<bits/stdc++.h>
using namespace std;

int swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
cout<<a<<" "<<b<<endl;
}
int main()
{
    int x=10,y=2;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;




}
