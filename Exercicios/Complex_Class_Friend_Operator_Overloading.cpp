#include <iostream>
using namespace std;

class complex{
	
	private:
		int real, img;
	
	public:
		complex (int x = 0, int y = 0){
			real = x;
			img = y;
		}
		
		void display (){
			cout<<real<<"+i"<<img<<endl;
		}
		
		friend complex add (complex c1, complex c2);
		friend complex operator+ (complex c1, complex c2);
};

complex add (complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}
		
complex operator+ (complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}


int main (){
	complex c1(3,5);
	complex c2 (7,5);
	complex c3;
	complex c4;
	
	c3 = add(c1,c2);
	c4 = c1+c2;
	c4 = c3+c4;
	
	c1.display();
	c2.display();
	c3.display();
	c4.display();
}
