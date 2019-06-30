

#include<iostream>
using namespace std; 


int main() 
{ 
    int n;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cin>>n;
    if(n>=2000){
        n1=n/2000;
        n=n-(2000*n1);
    }
    if(n>=500){
        n2=n/500;
        n=n-(500*n2);
    }
    
    if(n>=100){
        n3=n/100;
        n=n-(100*n3);
    }
    if(n>=50){
        n4=n/50;
        n=n-(50*n4);
    }
    cout<<n1+n2+n3+n4<<endl;
    
    return 0;
} 