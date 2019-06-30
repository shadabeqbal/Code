
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<array>
using namespace std; 


bool haspairwithsum(array<int,5> arr,int sum)
{
    set<int> s;
    for(int i=0;i<arr.size();i++)
    {
        if(s.find(arr[i]) != s.end())
            return true;
        else
            s.insert(sum-arr[i]);
    }
    return false;
}
int main() 
{ 
    array<int,5> arr={1,2,3,5,6};
    bool x = haspairwithsum(arr,10);
    cout<<x;
} 