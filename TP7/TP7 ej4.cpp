#include<iostream>
using namespace std;

class vec{
	
	private:
		int vector [10];
		
	public:
		void iniciar();
		void analizar();
		
};

void vec::iniciar(){
	
	for(int i = 0; i < 10; i++){
		
		cout<<"ingrese el juan nro "<<i+1<<": ";cin>>vector[i];
		
	}
}

void vec::analizar(){
	
	int cont = 0;
	
	for(int i = 0; i < 9; i++){
		
		if(vector[i] < vector[i+1]){
			
			cont=cont+1;
			
		}
		
	}
	
	cout<<cont<<endl;

	if(cont == 9){
	
	
		cout<<"el juan esta ordenado de mayor a menor"<<endl;
		
	}
	
	else {
		
		cout<<"el juan NO esta ordenado de mayor a menor"<<endl;
		
	}
	
}

int main(){
	
	vec v1, v2;
	
	cout<<"VECTOR 1"<<endl;
	v1.iniciar();
	v1.analizar();

	cout<<endl;
	
	cout<<"VECTOR 2"<<endl;
	v2.iniciar();
	v2.analizar();
	
}