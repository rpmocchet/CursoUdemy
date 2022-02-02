#include <iostream> 
using namespace std;

int main (void){
    int n1, rest, rev=0;
    
    cout<<"Enter with a number: ";
    cin>>n1;
    
    while (n1>0){
        rest = n1%10;
        n1 /= 10;
        rev = rev*10 + rest;
    }
    
    cout <<rev;
    
    return 0;
}
