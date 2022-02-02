/*criar classe (nome, preço e quant), escrever e ler de um arquivo*/

#include<iostream>
#include<fstream>

using namespace std;

class Item{
	
	public:
		string nome;
		float preco;
		int quant;

		Item (){};
		Item (string n, float p, int q);
		friend ofstream &operator<<(ofstream &out, Item &i);
		friend ifstream &operator>>(ifstream &in, Item &i);
		
		void Display(){
			cout<<this->nome<<endl;
			cout<<this->preco<<endl;
			cout<<this->quant<<endl;
		}
}; 

ofstream &operator<<(ofstream &out, Item &i){
	out<<i.nome<<endl;
	out<<i.preco<<endl;
	out<<i.quant<<endl;
	return out;
}

ifstream &operator>>(ifstream &in, Item &i){
	in>>i.nome>>i.preco>>i.quant;
	return in;
}

int main (){
	
	Item i1;
	i1.nome = "Mouse";
	i1.preco = 100.50;
	i1.quant = 1;
	
	Item i2;
	i2.nome = "Notebook";
	i2.preco = 15000.00;
	i2.quant = 1;
	
	ofstream out ("Estoque.txt", ios::trunc);
	
	out<<i1;
	out<<i2;
	
	out.close();
	
	Item i3, i4;
	
	ifstream in ("Estoque.txt");
	if (in.is_open()){
		in>>i3;
		in>>i4;
	}
	
	in.close();
	
	i3.Display();
	i4.Display();
	
	return 0;
}
