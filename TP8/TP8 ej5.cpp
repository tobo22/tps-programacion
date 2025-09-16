#include<iostream>
using namespace std;

class n {
	
	private:
		int num = 0;
		int suma = 0;
		int cont = 0;
		
	public:
		void iniciar();
		void perfecto();
		void mostrar();
	
};

void n::iniciar(){
	
	cout<<"ingrese un numero: ";cin>>num;
}

void n::perfecto(){
	
	for(int i = 1; i < num; i++){
		
		cout<<"calculando los divisores de "<<i<<endl;
		
		for(int j = 1; j < i; j++){
		
			if(i % j == 0){
				
				suma = suma + j; 
				
			}
		
		}
		
		if(i == suma){
				
			cout<<i<<" es perfecto: la suma de sus divisores da "<<suma<<endl;
			cont++;
			
		}
			
		else{
				
			cout<<i<<" NO es perfecto: la suma de sus divisores da "<<suma<<endl;
			
		}
		
		suma=0;
		
	}
	
}

void n::mostrar(){
	
	cout<<"desde '1' hasta '"<<num<<"' hay "<<cont<<" numeros perfectos"<<endl;
}

int main(){
	
	n num1, num2;
	
	cout<<"numero 1"<<endl;
	num1.iniciar();
	num1.perfecto();
	num1.mostrar();
	
	cout<<endl;
	
	cout<<"numero 2"<<endl;
	num2.iniciar();
	num2.perfecto();
	num2.mostrar();
	
}
