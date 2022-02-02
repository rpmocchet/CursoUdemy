#include <iostream>
using namespace std;

int search (int x[], int y, int z){
	
	for (int i=0; i<y; i++){
		if (z == x[i]){
			return i;
		}
	}
	return 0;
}

int main (){
	
	int A[] = {2,4,5,7,10,9,13};
	int k;
	
	cout<<"Enter with the number: ";
	cin>>k;
	int index = search (A, 7, k);
	
	if (index > 0){
		cout<<"The number is at index "<< index<<endl;	
	}
	else cout<<"The number is not found."<<endl;
	
	return 0;
}
