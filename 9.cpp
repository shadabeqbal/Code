
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; 


int main() 
{ 
    vector<int> a;
    int x,y,z;
    cin >> x >> y >> z;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    sort(a.begin(),a.end());

    if(a[0]+a[1]>=a[2])
        cout<<"Yes Triangle can be formed";
    else
        cout<<"No Triangle can not be formed";
    
    return 0;
} 