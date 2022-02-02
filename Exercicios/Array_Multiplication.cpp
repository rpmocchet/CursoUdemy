#include <iostream>
using namespace std;

int main (void){
	
	int x1,y1,x2,y2,i,j,k;
	
	cout <<"Enter with the size of the first array:"<<endl<<"How many lines do you want? ";
	cin >>x1;
	cout <<"How many Columns do you want? ";
	cin >>y1;
	
	cout <<"Enter with the size of the second array:"<<endl<<"How many lines do you want? ";
	cin >>x2;
	cout <<"How many Columns do you want? ";
	cin >>y2;
	
	if (y1 != x2){
		
		cout <<"ERROR! The first array columns size has to be equal of the second array lines size.";
		return 0;
	}
	
	cout <<"Enter with the numbers of the first array: "<<endl;
	
	int A[x1][y1], B[x2][y2], mult[x1][y2];
	
	for (i=0; i<x1; i++){
		for (j=0; j<y1; j++){
			cout <<"A ["<<i+1<<"]["<<j+1<<"] = ";
			cin >>A[i][j];
		}
	}
	cout <<"Enter with the numbers of the second array: "<<endl;
	
	for (i=0; i<x2; i++){
		for (j=0; j<y2; j++){
			cout <<"B ["<<i+1<<"]["<<j+1<<"] = ";
			cin >>B[i][j];
		}
	}
	
	for (i=0; i<x1; i++){
		for (j=0; j<y2; j++){
			for (k=0; k<x1; k++){
				mult [i][j] = A[i][k] * B[k][j];
			}
		}
	}
	
	cout <<"The result of the Multiplication is: "<<endl;
	
	for (i=0; i<x1; i++){
		for (j=0; j<x2; j++){
			cout <<"["<<i+1<<"]["<<j+1<<"] = "<<mult[i][j]<<endl;
		}
	}*/
	
	return 0;
}
