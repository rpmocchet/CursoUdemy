#include <iostream>
using namespace std;

int main (void){
    int n, m;
    
    cout<<"Enter with two numbers ";
    cin>>n>>m;
    
    while (m!=n){
        if (m>n){
            m = m-n;
        }
        else{
            n = n-m;
        }
    }
    
    cout<<m;
    
    return 0;
}
