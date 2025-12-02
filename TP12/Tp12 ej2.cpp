#include<iostream>
using namespace std;

class nose {
	
	private:
		int edad;
	
	public:
		nose() { cout<<"ingrese la edad: ";cin>>edad; }
		void mostrar() { cout<<"edad: "<<edad<<endl; }
		void mayor() {
	
			if(edad > 17){
				cout<<edad<<endl;
				cout<<"es mayor"<<endl;
			}
			
			else {
				cout<<edad<<endl;
				cout<<"es menor"<<endl;
			}
			
		}
};

class vector {
	
	private:
	int edades[5];
	
	public:
	vector() { for(int i = 0; i < 5; i++){ cout<<"ingrese su edad nro "<<i+1<<": ";cin>>edades[i]; } }
	void mostrar();
	void mostrar(int desde, int hasta);
	void mostrar (int hasta);
	
};

void vector::mostrar(){
	
	cout<<"edades completas:"<<endl;	
	
	for(int i = 0; i < 5; i++){
		
		cout<<"edad "<<i+1<<": "<<edades[i]<<endl;
		
	}
	cout<<endl;

}

void vector::mostrar(int desde, int hasta){
	
	cout<<"edades desde la posicion "<<desde<<" hasta la posicion "<<hasta<<":"<<endl;
	
	for(int i = desde-1; i < hasta; i++){
		
		cout<<"edad "<<i+1<<": "<<edades[i]<<endl;
		
	}
	
	cout<<endl;
}

void vector::mostrar(int hasta){
	
	cout<<"todas las edades hasta la posicion "<<hasta<<":"<<endl;
	
	for(int i = 0; i < hasta; i++){
		
		cout<<"edad "<<i+1<<": "<<edades[i]<<endl;
		
	}
	
	cout<<endl;
}

int main(){
	nose n;
	int desde = 0, hasta = 0;
	
	n.mostrar();
	n.mayor();
	
	vector v;
	v.mostrar();
	cout<<"ingrese la posicion en la que iniciara su lista: ";cin>>desde;
	cout<<"ingrese hasta que posicion desea mostrar su lista: ";cin>>hasta;
	v.mostrar(desde, hasta);
	v.mostrar(hasta);
	
}
