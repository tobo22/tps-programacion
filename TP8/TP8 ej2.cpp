#include<iostream>
using namespace std;

class numero{
	
	private:
		int num1 = 0, num2 = 0;
		
	public:
		void iniciar();
		void comparar();
};

void numero::iniciar(){
	
	cout<<"ingrese su primer juan: ";cin>>num1;
	cout<<"ingrese su segundo juan: ";cin>>num2;
	
}


void numero::comparar(){
	
	if(num1 > num2){
		
		cout<<"el juan mayor es el primero ("<<num1<<")"<<endl;
		
	}
	
	else if(num1 < num2) {
		
		cout<<"el juan mayor es el segundo ("<<num2<<")"<<endl;
		
	}
	
	else {
		
		cout<<"ambos juanes tienen el mismo valor ("<<num1<<")"<<endl;
	}
	
}

int main(){
	
	numero n1, n2;
	
	cout<<"numero 1"<<endl;
	n1.iniciar();
	n1.comparar();
	
	cout<<endl;
	
	cout<<"numero 2"<<endl;
	n2.iniciar();
	n2.comparar();
	
}