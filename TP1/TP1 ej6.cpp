#include<iostream>
using namespace std;

int funcion();

int main(){

funcion();
	
}

int funcion(){
	
	
	float entradas;
	float descuento;
	
	cout<<"cuantas entradas al show de juan comprara?"<<endl;
	cout<<"entrada: $22 juanes"<<endl;
	cout<<"cantidad de entradas: ";cin>>entradas;
	
	if(entradas == 1){
	
	entradas=entradas*22;
	cout<<"gracias por su compra!, son $"<<entradas<<" juanes"<<endl;	
		
	}
	
	else if(entradas == 2){
	
	entradas=entradas*22;
	descuento=entradas*.90;
	cout<<"gracias por su compra!, son $"<<descuento<<" juanes"<<endl;	
		
	}
	
	else if(entradas == 3){
	
	entradas=entradas*22;
	descuento=entradas*.85;
	cout<<"gracias por su compra!, son $"<<descuento<<" juanes"<<endl;	
		
	}
	
	else if(entradas == 4){
	
	entradas=entradas*22;
	descuento=entradas*.80;
	cout<<"gracias por su compra!, son $"<<descuento<<" juanes"<<endl;		
		
	}
	
	else if(entradas > 4){
		
	entradas=entradas*22;
	cout<<"el descuento ya no aplica, debera pagar el precio total ($"<<entradas<<" juanes)"<<endl;
	}
	
		
	
}