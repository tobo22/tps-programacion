#include<iostream>
using namespace std;

class empleado {
	
	private:
		string nombre;
		int sueldo = 0;
		
	public:
		empleado();
		void mostrar();
		void impuestos();
		~empleado();
};

empleado::empleado(){
	
	cout<<"ingrese el nombre de su juan empleado: ";cin>>nombre;
	cout<<"ingrese su sueldo actual: ";cin>>sueldo;
	cout<<endl;
	
}

void empleado::mostrar(){
	
	cout<<"nombre: "<<nombre<<endl;
	cout<<"sueldo: $"<<sueldo<<endl;
	cout<<endl;
	
}

void empleado::impuestos(){
	
	if(sueldo > 3000){
		
		cout<<"el empleado "<<nombre<<" debe pagar impuestos debido a que su sueldo es de $"<<sueldo<<endl;
		cout<<endl;
		
	}
	
	else if(sueldo < 3000 && sueldo > 0){
		
		cout<<"el empleado "<<nombre<<" no debe pagar impuestos ya que su sueldo es de $"<<sueldo<<endl;
		cout<<endl;
		
	}
	
	else{
		
		cout<<"bro pagale a tu empleado"<<endl;
		cout<<endl;
	}
}

empleado::~empleado(){
	
	cout<<"~borrando datos...~"<<endl;
}


int main(){
	
	empleado e1;
	e1.mostrar();
	e1.impuestos();
	
}
