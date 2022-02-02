#include <iostream> 
using namespace std;

int main (void){
    float bill, total;
    
    cout<<"Enter with the bill valor: ";
    cin>>bill;
    
    if (bill < 100){
        total = bill;
    }
    else if (bill >= 100 && bill < 500){
        total = bill - (bill * 10/100);
    }
    else if (bill >= 500){
        total = bill - (bill * 20/100);
    }
    
    cout<<"$ "<<total;
    
    return 0;
}
