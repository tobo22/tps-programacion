#include<iostream>
using namespace std;

class triangulo {
	
	private:
		int ladoA;
		int ladoB;
		int ladoC;
		
	public:
		void iniciar();
		void ladoMayor();
		void equilatero();
	
};

void triangulo::iniciar(){
	
	cout<<"cuanto mide el primer lado de su juan triangulo?: "; cin>>ladoA;
	cout<<"cuanto mide el segundo lado de su juan triangulo?: "; cin>>ladoB;
	cout<<"cuanto mide el tercer lado de su juan triangulo?: "; cin>>ladoC;
	
}

void triangulo::ladoMayor(){
	
	if(ladoA > ladoB && ladoA > ladoC){
		
		cout<<"el primer lado ("<<ladoA<<") es el mayor"<<endl;
		
	}
	
	else if (ladoB > ladoA && ladoB > ladoC) {
		
		cout<<"el segundo lado ("<<ladoB<<") es el mayor"<<endl;
		
	}
	
	else if (ladoC > ladoA && ladoC > ladoB) {
		
		cout<<"el tercer lado ("<<ladoC<<") es el mayor"<<endl;
		
	}
	
	else {
		
		cout<<"ambos lados miden lo mismo ("<<ladoA<<")"<<endl;
		
	}
	
}

void triangulo::equilatero(){
	
	if(ladoA == ladoB == ladoC){
		
		cout<<"el juan triangulo es equilatero"<<endl;
		
	}
	
	else {
		
		cout<<"el juan triangulo NO es equilatero"<<endl;
		
	}
	
}



int main(){
	
	triangulo t1, t2;
	
	cout<<"juan triangulo 1"<<endl;
	t1.iniciar();
	t1.ladoMayor();
	t1.equilatero();
	
	cout<<endl;
	
	cout<<"juan triangulo 2"<<endl;
	t2.iniciar();
	t2.ladoMayor();
	t2.equilatero();
	
}