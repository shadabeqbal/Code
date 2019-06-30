

#include<iostream>
using namespace std; 


int main() 
{ 
    int n;
    cin>>n;
    if(n<=12 && n >=1){
    if(n == 2)
        cout<<"28";
    else if(n == 4 || n == 6 || n == 9 || n == 11)
        cout<<"30";
    else
        cout<<"31";
    }else{
        cout<<"We have only 12 months on earth.";
    }
    
    
    return 0;
} 