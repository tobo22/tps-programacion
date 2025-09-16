#include<iostream>
using namespace std;

class vec {
	
	private:
		int vector[5];
	
	public:
		void iniciar();
		void mostrar();
};

void vec::iniciar(){
	
	for(int i = 0; i < 5; i++){
		
		cout<<"ingrese el juan nro "<<i+1<<": ";cin>>vector[i];
		
	}
	
}

void vec::mostrar(){
	
	cout<<"Lista de vectores:"<<endl;
	for(int i = 0; i < 5; i++){
		
		cout<<"pos "<<i+1<<": "<<vector[i]<<endl;
		
	}
	
}

int main(){
	
	vec v1, v2;
	
	cout<<"vector 1:"<<endl;
	v1.iniciar();
	v1.mostrar();
	
	cout<<endl;
	
	cout<<"vector 2:"<<endl;
	v2.iniciar();
	v2.mostrar();
	
}