

#include<iostream>
using namespace std; 
#define MAX(x,y) (x>y?x:y)

int main() 
{ 
    int a=12,b=10,c=9;
    cout<<MAX(MAX(a,b),c)<<endl; 
    return 0;
} 