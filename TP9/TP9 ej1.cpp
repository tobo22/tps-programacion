#include<iostream>
using namespace std;

class alumno{
	
	private:
		string nombre;
		int edad = 0;
		
	public:
		alumno();
		void mostrar();
		void esMayor();
		~alumno();
};

alumno::alumno(){
	
	cout<<"ingrese el nombre de su alumno: ";cin>>nombre;
	cout<<"ingrese la edad de "<<nombre<<": ";cin>>edad;
	cout<<endl;
}

void alumno::mostrar(){
	
	cout<<"DATOS DEL ALUMNO"<<endl;
	cout<<"nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
	cout<<endl;
}

void alumno::esMayor(){
	
	if(edad >= 18){
		
		cout<<"el alumno "<<nombre<<" es mayor de edad"<<endl;
		
	}
	
	else {
		
		cout<<"el alumno "<<nombre<<" NO es mayor de edad"<<endl;
		
	}
}

alumno::~alumno(){
	
	cout<<"~borrando datos...~"<<endl;
	
}

int main(){
	
		alumno a1;
		a1.mostrar();
		a1.esMayor();
	
}
