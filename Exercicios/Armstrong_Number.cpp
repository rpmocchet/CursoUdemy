#include <iostream> 
#include <math.h>
using namespace std;

int main (void){
    int n1, n2, rest=0;
    
    cout<<"Enter with a number: ";
    cin>>n1;
    
    n2 = n1;
    
    while (n2>0){
        rest += pow(n2%10,3);
        n2 /= 10;
    }
    
    if (rest == n1){
        cout<<n1<<" is a Armstrong number.";
    }
    else{
        cout<<n1<<" is not a Armstrong number.";
    }
    
    return 0;
}
