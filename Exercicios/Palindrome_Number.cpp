#include <iostream>
using namespace std;

int main (void){
    int n, m, r, rev=0;
    
    cout<<"Enter with a number: ";
    cin>>n;
    
    m = n;
    
    while (n>0){
        r = n%10;
        rev = (rev*10) + r;
        n = n/10;
    }
    
    cout<<rev<<endl;
    
    if (rev == m){
        cout<<rev<<" is palindrome"<<endl;
    }
    else{
        cout<<rev<<" is not a palindrome"<<endl;
    }
    
    return 0;
}
