#include<iostream>
using namespace std;

class operaciones{
	
	private:
		float num1, num2;
		
	public:
		void iniciar();
		void suma();
		void resta();
		void mul();
		void div();
};

void operaciones::iniciar(){
	
	cout<<"ingrese su primer juan: "; cin>>num1;
	cout<<"ingrese su segundo juan: "; cin>>num2;
	
}

void operaciones::suma(){
	
	cout<<"el resultado de la juan suma es "<<num1+num2<<endl;
}

void operaciones::resta(){
	
	cout<<"el resultado de la juan resta es "<<num1-num2<<endl;
}

void operaciones::mul(){
	
	cout<<"el resultado de la juan multiplicacion es "<<num1*num2<<endl;
}

void operaciones::div(){
	
	cout<<"el resultado de la juan division es "<<num1/num2<<endl;
}

int main(){
	
	operaciones n1;
	
	n1.iniciar();
	n1.suma();
	n1.resta();
	n1.mul();
	n1.div();
	
}