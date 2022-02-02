#include <iostream>
using namespace std;

int main (void){
	int n, i;
	
	cout <<"Enter the number of elements: ";
	cin >>n;
	
	float num[n], sum=0.0, average;
	
	for (i=0; i<n; i++){
		cout <<"Enter the "<<i+1<<" number: ";
		cin >> num[i];
		sum += num[i];
	}
	
	average = sum / n;
	
	cout <<"The average of the numbers is: " <<average;
	
	return 0;
}
