#include <iostream>
using namespace std;

class Empregado{
	
	private:
		string nome;
		int id;
	
	public:	
		Empregado(string nome, int id){
			this->nome = nome;
			this->id = id;
		};
		int getEmpregadoID(){return id;}
		string getnome(){return nome;}
		
};

class Full_Time_Empregado:public Empregado{
	private:
		float salario;
	public:
		Full_Time_Empregado(string nome, int id, float salario):Empregado(nome, id){
			this->salario = salario;
		}
		int getFull_Time_Empregado_Salario(){return salario;}
};

class Part_Time_Empregado:public Empregado{
	
	private:
		float trabalho;
		
	public:
		Part_Time_Empregado(string nome, int id, float trabalho):Empregado(nome, id){
			this->trabalho = trabalho;
		}
		int getPart_Time_Empregado_Trabalho(){return trabalho;}
};

int main(){
	
	Part_Time_Empregado Empregado1("Joao", 0001, 500);
	Full_Time_Empregado Empregado2("Paulo", 0002, 1000);
	
	cout<<"Empregado: "<<Empregado2.getnome()<<endl;
	cout<<"ID: "<<Empregado2.getEmpregadoID()<<endl;
	cout<<"Salario: "<<Empregado2.getFull_Time_Empregado_Salario()<<endl;
	
	cout<<"Empregado: "<<Empregado1.getnome()<<endl;
	cout<<"ID: "<<Empregado1.getEmpregadoID()<<endl;
	cout<<"Salario: "<<Empregado1.	getPart_Time_Empregado_Trabalho()<<endl;
}
