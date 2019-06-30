#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(43);
    v.push_back(34);
    v.push_back(2);
    v.push_back(4);
    v.push_back(1);

    sort(v.begin(),v.end());
    //reverse(v.begin(),v.end());
    vector<int>::iterator ptr = max_element(v.begin(),v.end());
    vector<int>::iterator ptr1 = min_element(v.begin(),v.end());
    int z = accumulate(v.begin(),v.end(),0);
    int cnt = count(v.begin(),v.end(),43);
    auto num = find(v.begin(),v.end(),43);
    int srch = binary_search(v.begin(),v.end(),34);
    auto lb = lower_bound(v.begin(),v.end(),1);
    auto ub = upper_bound(v.begin(),v.end(),4);
    auto dis = distance(v.begin(),v.end());
    auto aof = all_of(v.begin(),v.end(),[](int x){return x>0;})?
        cout<<"All positive" : cout<<"All NOT Positive";

    for(auto x : v)
        cout<<x<<" ";

    cout<<endl;
    cout<<"max: "<<*ptr<<endl<<
    "min: "<<*ptr1<<endl<<
    "accumulate: "<<z<<endl<<
    "count: "<<cnt<<endl<<
    "find: "<<*num<<endl<<
    "b_search: "<<srch<<endl<<
    "lb: "<<*lb<<endl<<
    "ub: "<<*ub<<endl<<ub-lb<<endl<<
    "Distance: "<<dis<<endl<<
    "AOF: "<<*aof;

    return 0;
}