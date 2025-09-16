#include <iostream>
#include <conio.h>
using namespace std;

int funcion();

int main(){
	
funcion();	
	
}

int funcion(){
	
	int num1, num2, num3;
	int contador = 0;
	int contadorN = 0;
	int mayor[3];
	
	cout<<"ingrese su primer juan: ";cin>>num1;
	cout<<"ingrese su segundo juan: ";cin>>num2;
	cout<<"ingrese su tercer juan: ";cin>>num3;
	
	cout<<endl;
	
	if(num1 < 10) {
		
	contadorN++;
		
	}
	
	else if(num1 >= 10) {
	contador++;
	mayor[contador-1] = num1;
	
	}
	
	if(num2 < 10) {
		
	contadorN++;
		
	}
	
	else if(num2 >= 10) {
	contador++;
	mayor[contador-1] = num2;
	}
	
	
	if(num3 < 10) {
		
	contadorN++;
		
	}
	
	else if(num3 >= 10) {
	contador++;
	mayor[contador-1] = num3;
	}
	
	if(contadorN == 3){
		
	cout<<"todos los juanes son menores a 10"<<endl;
	return 0;
	
	}
	
	if(contador == 1){
		
	cout<<"el juan mayor a 10 es:"<<endl;
	for(int i=0; i < contador; i++){
		
	cout<<mayor[i]<<endl;
		
	}
	
	}
	else if(contador > 1){
	
	cout<<"los juanes mayores a 10 son:"<<endl;
	for(int i=0; i < contador; i++){
		
	cout<<mayor[i]<<endl;
		
	}
	cout<<"("<<contador<<"/3 juanes)"<<endl;
		
	}
	
    
	
}