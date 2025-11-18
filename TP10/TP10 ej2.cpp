#include<iostream>
#include<vector>
using namespace std;

class persona{
	
	private:
		string nombre;
		int edad = 0;
		
	public:
		persona(string nombre, int edad) : nombre(nombre), edad(edad) {}
		string getNombre() { return nombre; }
		int getEdad() { return edad; }
		
};

bool porEdad;

int main(){
	
	vector<persona> personas;
	vector <persona> temp; 
	int edad;
	string nombre;
	
	for(int i = 0; i < 3; i++){
	
		cout<<"ingrese el juan nombre: ";cin>>nombre;
		cout<<"ingrese la edad de "<<nombre<<": ";cin>>edad;
		personas.push_back(persona(nombre, edad));
		temp.push_back(persona(nombre, edad));
	
	}
	
	for(int i = 0; i < 3; i++){
		
		for(int i = 0; i < 2; i++){
			
			if(personas[i].getEdad() < personas[i+1].getEdad()){
			
			temp[i] = personas[i];
			personas[i] = personas[i+1];
			personas[i+1] = temp[i];
			
			}
		
		}
	
	}
	
	cout<<endl;
	
	for(int i = 0; i < 3; i++){
		
		cout<<"nombre: "<<personas[i].getNombre()<<endl;
		cout<<"edad: "<<personas[i].getEdad()<<endl;
		
	}
	
}
