#include<iostream>
using namespace std;

class alumno{
	
	private:
		string nombre;
		int nota1, nota2, nota3;
		
	public:
		alumno();
		void mostrar();
		
};

alumno::alumno(){
	
	cout<<"ingrese el nombre del alumno: ";cin>>nombre;
	cout<<"ingrese su primera juan nota: ";cin>>nota1;
	cout<<"ingrese su segunda juan nota: ";cin>>nota2;
	cout<<"ingrese su tercer juan nota: ";cin>>nota3;
	cout<<endl;

}

void alumno::mostrar(){
		
	cout<<"notas de "<<nombre<<":"<<endl;
	cout<<"nota 1: "<<nota1<<endl;
	cout<<"nota 2: "<<nota2<<endl;
	cout<<"nota 3: "<<nota3<<endl;
	cout<<endl;
	
}

int main(){
	
	int cant = 0;
	cout<<"ingrese la cantidad de alumnos: ";cin>>cant;
	
	alumno a1[cant];
	for(int i = 0; i < cant; i++){
	
		a1[i].mostrar();
	
	}
}
