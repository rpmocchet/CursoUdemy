#include <iostream>
using namespace std;

class rational{
	
	private:
		int numerador, denominador;
	
	public:
		rational (int x = 1, int y = 1){
			numerador = x;
			denominador = y;
		}
		
		friend rational operator+ (rational z1, rational z2);
		friend ostream & operator << (ostream &out, rational z1);
};
		
rational operator+ (rational z1, rational z2){
	rational temp;
	
	if (z1.denominador == z2.denominador){
		temp.numerador = z1.numerador + z2.numerador;
		temp.denominador = z1.denominador;
	}
	else {
		temp.numerador = (((z1.denominador * z2.denominador) / z1.denominador) * z1.numerador) + (((z1.denominador * z2.denominador) / z2.denominador) * z2.numerador);
		temp.denominador = z1.denominador * z2.denominador;
	}
	
	return temp;
}

ostream & operator << (ostream &out, rational z1){
	out << z1.numerador<<"/"<<z1.denominador;
	return out;
}


int main (){
	rational n1(3,5);
	rational n2 (2,5);
	rational n3;
	
	n3 = n1+n2;
	
	cout<<n1<<endl<<n2<<endl<<n3;
}
