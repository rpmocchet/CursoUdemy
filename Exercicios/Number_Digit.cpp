#include <iostream> 
using namespace std;

int main (void){
    int n;
    
    cout<<"Enter with a number: ";
    cin>>n;
    
    while (n>0){
        cout<<n%10<<endl;
        n=n/10;
    }
    
    return 0;
}
