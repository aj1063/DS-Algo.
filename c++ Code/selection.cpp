#include <iostream>
#include<vector>

using namespace std;

int findmin(vector<int>&arr,int start)
{
    int minindex=start;
    ++start;
    while(start<(int)arr.size())
    {
        if(arr[start]<arr[minindex])
            minindex=start;
        
        start++;
    }
    
    return minindex;
    
}
int selection(vector<int>&arr )
{
    
    for(int i=0; i<(int)arr.size(); i++ )
    {
        int minindex=findmin(arr,i);
        if(i!=minindex)
        {
            swap(arr[i],arr[minindex]);
            
        }
    }
    
    
}

int main() {
	vector<int>arr={5,7,3,4,9,7,8,0};
	selection(arr);
	
    for(int num : arr)  
        cout << num << " "; 
	return 0;
}