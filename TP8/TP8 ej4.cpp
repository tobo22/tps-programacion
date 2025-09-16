#include<iostream>
using namespace std;

class Cempleados{

	private:
		string nombre;
		float salario = 0;
		float horas = 0;
		
	public:
		void iniciar();
		void aumentar();
		void mostrar();

};

void Cempleados::iniciar(){
	
	cout<<"ingrese el nombre del empleado de juan company: ";cin>>nombre;
	cout<<"ingrese el salario de "<<nombre<<": ";cin>>salario;
	cout<<"ingrese las horas que trabajo "<<nombre<<": ";cin>>horas;
	cout<<endl;
}

void Cempleados::aumentar(){
	
	if(horas >= 12){
		
		salario = salario + 350000;
		
	}
	
	else if (horas >= 10){
		
		salario = salario + 300000;
		
	}
	
	else if (horas >= 8){
		
		salario = salario + 250000;
	}
}

void Cempleados::mostrar(){
	
	cout<<"datos actualizados"<<endl;
	cout<<"nombre: "<<nombre<<endl;
	cout<<"salario actualizado: $"<<salario<<endl;
}


int main(){
	
	Cempleados e1, e2;
	
	cout<<"empleado 1"<<endl;
	e1.iniciar();
	e1.aumentar();
	e1.mostrar();
	
	cout<<endl;
	
	cout<<"empleado 2"<<endl;
	e2.iniciar();
	e2.aumentar();
	e2.mostrar();
	
}
