#include<iostream>
using namespace std;

class CNumeros{
	
	private:
		int num1 = 0, num2 = 0, num3 = 0;
		
	public:
		void iniciar();
		void calcular();
		
};

void CNumeros::iniciar(){
	
	cout<<"ingrese su primer juan: ";cin>>num1;
	cout<<"ingrese su segundo juan: ";cin>>num2;
	cout<<"ingrese su tercer juan: ";cin>>num3;
	
}


void CNumeros::calcular(){
	
	if(num1 > num2 && num1 > num3){
		
		cout<<"el juan mayor es el primero ("<<num1<<")"<<endl;
		
	}
	
	else if(num1 < num2 && num3 < num2) {
		
		cout<<"el juan mayor es el segundo ("<<num2<<")"<<endl;
		
	}
	
	else if(num3 > num2 && num3 > num1) {
		
		cout<<"el juan mayor es el tercero ("<<num3<<")"<<endl;
		
	}
	
	else {
		
		cout<<"todos juanes tienen el mismo valor ("<<num1<<")"<<endl;
		
	}
	
}

int main(){
	
	CNumeros n1, n2;
	
	cout<<"numero 1"<<endl;
	n1.iniciar();
	n1.calcular();
	
	cout<<endl;
	
	cout<<"numero 2"<<endl;
	n2.iniciar();
	n2.calcular();
	
}