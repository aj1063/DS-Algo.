#include<iostream>
#include<math.h>

using namespace std;

int main()
{
 int net,bsa,allpr=0,dedpr=0;
cout<<"enter bsa, allpr,dedpr"<<endl;
cin>>bsa>>allpr>>dedpr;
allpr=(bsa*allpr)/100;
dedpr=(bsa*dedpr)/100;
net=bsa+allpr-dedpr;
cout<<"Net sallary is "<<net;
return 0;

}
