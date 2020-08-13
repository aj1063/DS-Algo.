#include<bits/stdc++.h>
using namespace std;

class Rectangle{

    public:
    int len;
    int bre;
    int area()
    {
        return len*bre;
    }   
    int perimtr()
    {
        return 2*(len+bre);
    }    
};

int main()
{
    Rectangle r,r1;
    r.len=10;
    r.bre=5;
    cout<<r.area()<<endl;
    cout<<r.perimtr()<<endl;
     r1.len=20;
    r1.bre=15;
    cout<<r1.area()<<endl;
    cout<<r1.perimtr();

    return 0;
}