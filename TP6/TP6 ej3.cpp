#include<iostream>
using namespace std;

class cuadrado {
	private:
		int ladoA, ladoB, ladoC, ladoD;
		
	public:
		void iniciar();
		void perimetro();
		void superficie();
};

void cuadrado::iniciar(){
	
	cout<<"ingrese el primer lado de su juan cuadrado: "; cin>>ladoA;
	cout<<"ingrese el segundo lado de su juan cuadrado: "; cin>>ladoB;
	cout<<"ingrese el tercer lado de su juan cuadrado: "; cin>>ladoC;
	cout<<"ingrese el cuarto lado de su juan cuadrado: "; cin>>ladoD;
	
}

void cuadrado::perimetro(){
	
	int per = ladoA + ladoB + ladoC + ladoD;
	cout<<"el perimetro es de "<<per<<" metros"<<endl;
	
}

void cuadrado::superficie() {
	
	int super = ladoA * ladoA;
	cout<<"la superficie del primer lado es de "<<super<<" metros"<<endl;
}

int main(){
	
	cuadrado c1, c2;
	
	cout<<"cuadrado 1"<<endl;
	c1.iniciar();
	c1.perimetro();
	c1.superficie();
	
	cout<<endl;
	
	cout<<"cuadrado 2"<<endl;
	c2.iniciar();
	c2.perimetro();
	c2.superficie();
	
}