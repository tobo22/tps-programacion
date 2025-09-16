#include<iostream>
using namespace std;

class vec {
	
	private:
		int vec1[8];
	
	public:
		void iniciar();
		void acumulado_total();
		void acumuldo36();
		void mayor50();
	
};

void vec::iniciar(){
	
	for(int i = 0; i < 8; i++){
		
		cout<<"ingrese su juan nro"<<i+1<<": ";
		cin>>vec1[i];
		cout<<endl;
		
	}
	
}

void vec::acumulado_total(){
	
	int cont = 0;
	
	for(int i = 0; i < 8; i++){
		
		cont = cont + vec1[i];
		
	}
	
	cout<<"el valor acumulado de los vectores es: "<<cont<<endl;
	cout<<endl;
	
}

void vec::acumuldo36(){
	
	int cont = 0;
	
	for(int i = 0; i < 8; i++){
		
		if(vec1[i] > 36){
		
		cont = cont + 1;
		
		}
		
	}
	
	cout<<"la cantidad de juanes mayores a 36 son: "<<cont<<endl;
	cout<<endl;
	
}

void vec::mayor50(){
	
	int cont = 0;
	
	cout<<"los juanes mayores a 50 son:"<<endl;
	
	for(int i = 0; i < 8; i++){
		
		if(vec1[i] > 50){
		
			cout<<"posicion "<<i+1<<": "<<vec1[i]<<endl;
			cont = cont + 1;
		
		}
	
		
		
	}
		cout<<"la cantidad de juanes mayores a 50 son: "<<cont<<endl;
		cout<<endl;
	
}

int main(){
	
	vec v1, v2;
	
	cout<<"vector 1:"<<endl;
	v1.iniciar();
	v1.acumulado_total();
	v1.acumuldo36();
	v1.mayor50();
	
	cout<<endl;
	
	cout<<"vector 2:"<<endl;
	v2.iniciar();
	v2.acumulado_total();
	v2.acumuldo36();
	v2.mayor50();
	
	
}

