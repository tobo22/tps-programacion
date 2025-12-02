#include<iostream>
using namespace std;

class persona {
	
	protected:
		string nombre;
		int edad;
		
	public:
		persona() { cout<<"ingrese su nombre: ";cin>>nombre; cout<<"ingrese su edad: ";cin>>edad; }
		void mostrar() { cout<<"nombre: "<<nombre<<endl; cout<<"edad: "<<edad<<endl; } 
	
};

class empleado : public persona{
	
	protected:
		int salario;
		
	public:
		empleado() { cout<<"ingrese su salario: ";cin>>salario; }
		mostrar() { cout<<"nombre: "<<nombre<<endl; cout<<"edad: "<<edad<<endl; cout<<"salario: "<<salario<<endl; }
	
	
};

int main(){
	
	persona p;
	empleado e;
	
	p.mostrar();
	e.mostrar();
	
}
