#include <iostream>
using namespace std;

class shape{
	public:
		virtual float area()=0;
		virtual float perimetro()=0;
};

class Retangulo:public shape{
	private:
		float lado, comprimento;
		
	public:
		Retangulo(int l = 1, int c = 1){
			lado = l;
			comprimento = c;
		}
		
		float area(){
			cout<<"Area do Retangulo e: "<< lado*comprimento<<endl;
		}
		
		float perimetro(){
			cout<<"Perimetro do Retangulo e: "<<2*(lado+comprimento)<<endl;
		}
};

class Circulo:public shape{
	private:
		float raio;

	public:
		Circulo(int r = 1){
			raio = r;
		}
		
		float area(){
			cout<<"Area do Circulo: "<<3.1425*raio*raio<<endl;
		}
		
		float perimetro(){
			cout<<"Perimetro do Circulo: "<<2*3.1425*raio<<endl;
		}
};

int main(){
	
		shape *p = new Retangulo(10,5);
		p->area();
		p->perimetro();
		
		p = new Circulo(10);
		p->area();
		p->perimetro();
		
		return 0;
}
