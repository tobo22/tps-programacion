#include<iostream>
using namespace std;

class  persona{
	
	private:
		float altura[5];
		float promedio = 0;
		
	public:
		void iniciar();
		float prom();
		void mayorPromedio();
};

void persona::iniciar(){
	
	for(int i = 0; i < 5; i++){
		
		cout<<"ingrese la altura de la persona nro"<<i+1<<": ";cin>>altura[i];
		
	}
}

float persona::prom(){
	
	int suma = 0;
	
	for(int i = 0; i < 5; i++){
		
		suma=suma+altura[i];
		
	}
	
	promedio=suma/5;
	
	return promedio;
	
}

void persona::mayorPromedio(){
	
	int mayor = 0;
	int menor = 0;
	
	for(int i = 0; i <5; i++){
	
		if(altura[i] > promedio){
		
			mayor=mayor+1;
		
		}
		
		else {
			
			menor=menor+1;
			
		}
	
	}
	cout<<"hay "<<mayor<<" personas mayores al promedio ("<<promedio<<"m), y "<<menor<<" personas menores al promedio ("<<promedio<<"m)"<<endl;
	
}


int main(){
	
	persona p1, p2;
	
	cout<<"persona 1"<<endl;
	p1.iniciar();
	cout<<"el promedio es de "<<p1.prom()<<" metros"<<endl;
	p1.mayorPromedio();
	
	cout<<endl;
	cout<<"persona 2"<<endl;
	p2.iniciar();
	cout<<"el promedio es de "<<p2.prom()<<" metros"<<endl;
	p2.mayorPromedio();
	
}