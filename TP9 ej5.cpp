#include<iostream>
using namespace std;

class estudiante{
	
	private:
		string nombre;
		int edad;
		int calificacion;
		
	public:
		void setNombre(string n) {
			nombre = n;
		}
		void setEdad(int e) {
			edad = e; 
		}
		void setCal(int c) {
			calificacion = c;
		}
		
		string getNombre() {
			return nombre;
		}
		
		int getEdad() {
			return edad;
		}
		
		int getCal() {
			return calificacion;
		}
		
};

int main(){
	
	estudiante e1;
	
	string n;
	int e, c;
	
	cout<<"ingrese el nombre del alumno: ";cin>>n;
	e1.setNombre(n);
	cout<<e1.getNombre()<<endl;
	
	cout<<"ingrese la edad del alumno: ";cin>>e;
	e1.setEdad(e);
	cout<<e1.getEdad()<<endl;
	
	cout<<"ingrese la calificacion dedl alumno: ";cin>>c;
	e1.setCal(c);
	cout<<e1.getCal()<<endl;
	
}
