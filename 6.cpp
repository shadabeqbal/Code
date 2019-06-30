
#include<iostream>
using namespace std; 


int main() 
{ 
    char n;
    cin>>n;
    if((int)n >= 65 && (int)n <=90)
        cout<<"U";
    else if((int)n >= 97 && (int)n <=122)
        cout<<"L";
    else
        cout<<"Are you sure it's an alphabet";
    
    return 0;
} 