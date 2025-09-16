#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int funcion();

int main(){
	
	
	funcion();
	
	
}

int funcion(){
	
	srand(time(0));
	int plata = rand() % 10000 + 1;
	
	int retirar, opciones;
	
	cout<<"BIENVENIDO AL JUANBANCO CENTRAL MUNICIPAL INTERNACIONAL NACIONAL PROVINICAL (J.M.I.N.P)"<<endl;
	
	while(true){
	
	if(plata == 1){
	
	cout<<"saldo actual: $"<<plata<<" juan"<<endl;
	
	}
	
	else{
	
	
	cout<<"saldo actual: $"<<plata<<" juanes"<<endl;
	
	}
	
	cout<<"que operacion desea realizar?"<<endl;
	cout<<"1. retirar dinero"<<endl;
	cout<<"2. ingresar dinero"<<endl;
	cout<<"3. pedir prestamo"<<endl;
	cout<<"4. salir"<<endl;
	cin>>opciones;
	
	switch(opciones){
		
		case 1:
		cout<<"cuanto dinero desea retirar?: ";cin>>retirar;
		
		if(retirar > plata){
		
		if(retirar-plata == 1) {
			
		cout<<"necesitaria $"<<retirar-plata<<" juan mas para retirar esa cantidad"<<endl;
			
		}
		
		
		
		else {
			
		cout<<"necesitaria $"<<retirar-plata<<" juanes mas para retirar esa cantidad"<<endl;
			
		}
		
		}
		
		
		
		else {
			
		cout<<"el retiro fue exitoso!, su saldo sera actualizado"<<endl;
		plata=plata-retirar;
		
		}
		break;
		
		case 2:
		cout<<"cuanto dinero desea ingresar?:";cin>>retirar;
		cout<<"perfecto!, se agregaran $"<<retirar<<" a su cuenta"<<endl;
		plata=plata+retirar;
		break;
		
		case 3:
		cout<<"cuanto dinero desea pedir, indigena?: "; cin>>retirar;
		
		if(retirar == 1){
		
		cout<<"le daremos $"<<retirar<<"  juan, solo por lastima"<<endl;	
			
		}
		
		else{
		
		cout<<"le daremos $"<<retirar<<"  juanes, solo por lastima"<<endl;
		
		}
		cout<<"(devuelvalo o le envargamos el alma)"<<endl;
		break;
		
		case 4:
		cout<<"nos vemos cuando llegues a fin de mes"<<endl;
		return 0;
		break;
		
		
		
	}
	
	system("pause");
	system("cls");

}
	
	
	
}