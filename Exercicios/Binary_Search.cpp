//Binary Search is faster than linear search. Linear search is a search that takes n time, binary search is a search that takes log(n) time.
#include <iostream>
using namespace std;

int main (void){

	int A[10] = {6,8,13,17,20,22,25,28,30,35};
	int low=0, high=9, mid, key;

	cout<<"Enter with a key";
	cin>>key;

	while (low <= high){
		mid = (low + high) /2;
	
		if (key == A[mid]){
			cout<<"key found at " <<mid;
			return 0;
		}

		else if (key < A[mid]){
			high = mid - 1;
		}

		else{
			low = mid + 1;
		}
	}
	
	cout <<"Key not found!";
	return 0;
}
