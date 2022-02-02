#include <iostream>
using namespace std;

class Student{
	
	private:
		//Variáveis
		int roll;
		string name;
		int math_mark, phy_mark, chem_mark;
		
	public:
		//Constructor
		Student (int r, string n, int m, int p, int c){
			roll = r;
			name = n;
			math_mark = m;
			phy_mark = p;
			chem_mark = c;
		}
		//Total grades
		int Total (){
			return math_mark+phy_mark+chem_mark;
		}
		//Grades
		char Grade(){
			float media = Total()/3;
			if (media > 60){
				return 'A';
			}
			else if (media >= 40 && media < 60){
				return 'B';
			}
			else {
				return 'C';
			}
		}
};

int main (){
	
	int roll, math, phy, chem;
	string name;
	
	cout<<"Enter with the Student Roll Number: ";
	cin>>roll;
	cout<<"Enter with the Student Name: ";
	cin>>name;
	cout<<"Enter with the Math, Phy and Chem grades: ";
	cin>>math>>phy>>chem;
	
	Student S(roll,name,math,phy,chem);
	
	cout<<"Total Marks is: "<<S.Total()<<endl;
	cout<<"The Grade is: "<<S.Grade()<<endl;
}
