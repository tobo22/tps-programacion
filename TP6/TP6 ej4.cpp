#include<iostream>
using namespace std; 

class empleado {

	private:
		string nombre;
		int sueldo;
		
	public:
		void inciar();
		void datos();
		void impuestos();	
	
};

void empleado::inciar(){
	
	cout<<"ingrese el nombre del juan empleado (o <nombre> empleado todavia no esta definido): "; cin>>nombre;
	cout<<"ingrese el sueldo del "<<nombre<<" empleado (ahora si esta definido): "; cin>>sueldo;
	
}

void empleado::datos(){
	
	cout<<"nombre: "<<nombre<<endl;
	cout<<"sueldo: $"<<sueldo<<endl;
	
}

void empleado::impuestos(){
	
	if(sueldo > 3000){
		
		cout<<"el empleado "<<nombre<<" debe pagar los impuestos de juan landia"<<endl;
		
	}
	
	else {
		
		cout<<"el empleado "<<nombre<<" esta libre de impuestos"<<endl;
		
	}
}

int main(){
	
	empleado e1, e2;
	
	cout<<"empleado 1"<<endl;
	e1.inciar();
	e1.datos();
	e1.impuestos();
	
	cout<<endl;
	
	cout<<"empleado 2"<<endl;
	e2.inciar();
	e2.datos();
	e2.impuestos();
	
}