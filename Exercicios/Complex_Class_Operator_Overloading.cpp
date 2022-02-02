#include <iostream>
using namespace std;

class complex{
	
	public:
		int real, img;
	
	public:
		complex (int x = 0, int y = 0){
			real = x;
			img = y;
		}
		
		complex add (complex c){
			complex temp;
			temp.real = real + c.real;
			temp.img = img + c.img;
			return temp;
		};
		
		complex operator+ (complex c){
			complex temp;
			temp.real = real + c.real;
			temp.img = img + c.img;
			return temp;
		};
};


int main (){
	complex c1(3,5);
	complex c2 (7,5);
	complex c3;
	complex c4;
	
	c3 = c1.add(c2);
	c4 = c1+c2;
	c4 = c3+c4;
	
	cout<<c1.real<<"+i"<<c1.img<<endl;
	cout<<c2.real<<"+i"<<c2.img<<endl;
	cout<<c3.real<<"+i"<<c3.img<<endl;
	cout<<c4.real<<"+i"<<c4.img<<endl;
}
