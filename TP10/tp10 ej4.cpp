#include<iostream>
#include<vector>
using namespace std;

class cuentaBancaria{
	
	private:
		int numCuenta = 0;
		string titular;
		int saldo = 0;
		
	public:
		cuentaBancaria(int numCuenta, string titular, float saldo) : numCuenta(numCuenta), titular(titular), saldo(saldo) {}
		int getNumCuenta() {return numCuenta;}
		string getTitular() {return titular;}
		int getSaldo() {return saldo;}
		void setSaldo(int s) {saldo = s;}
		
};

int main(){

	vector<cuentaBancaria> cb;
	int cant = 0;
	int numCuenta = 0;
	string titular;
	int saldo = 0;
	int sel = 0;
	int sel2 = 0;
	bool salirC = false;
	
	cout<<"ingrese la cantidad de cuentas que desea guardar: ";cin>>cant;
	
	if(cant < 1){
		
		cout<<"necesita registrar minimo 1 cuenta"<<endl;
		return main();
		
	}
	
	for(int i = 0; i < cant; i++){
		
		cout<<"ingrese el nombre del propietario: ";cin>>titular;
		cout<<"ingrese el numero de cuenta: ";cin>>numCuenta;
		cout<<"ingrese el saldo de la cuenta: ";cin>>saldo;
		cb.push_back(cuentaBancaria(numCuenta, titular, saldo));
		cout<<"cuenta almacenada con exito!"<<endl;
		system("pause");
		system("cls");
		
	}
	
	cout<<"[haz guarado correctamente "<<cant<<" cuentas]"<<endl;
	system("pause");
	system("cls");
	
	cout<<"JUAN BANCO VECTORIANO"<<endl;
	
	while(true){
		
		
		cout<<"seleccione una cuenta para modificar:"<<endl;
		
		for(int i = 0; i < cant; i++){
		cout<<"cuenta "<<i+1<<"("<<cb[i].getTitular()<<"-"<<cb[i].getNumCuenta()<< ") / ";
		}
		
		cout<<"seleccione el numero de cuenta a la que ingresara (ej 1, 2, 3) [si desea salir, ingrese el numero 0]: ";cin>>sel;
		
		if(sel == 0){
			
			cout<<"hasta luego!"<<endl;
			return 0;	
		}
		
		else if(sel > cant){
			cout<<"comando no reconocido"<<endl;
			return main();
			sel = 1;
		}
		
		while(salirC == false){
		
			cout<<"bienvenido "<<cb[sel-1].getTitular()<<"!"<<endl;
			cout<<"su saldo es de $"<<cb[sel-1].getSaldo()<<endl;
			cout<<"que accion desea realizar?"<<endl;
			cout<<"1.agregar saldo   2.retirar saldo   3.salir de la cuenta"<<endl;
			cin>>sel2;
			
			if(sel2 > 3){
				
				cout<<"comando no reconocido"<<endl;
				
			}
		
			switch(sel2){
			
				case 1:
				cout<<"cuanto dinero desea agregar?: ";cin>>sel2;
				cout<<"se han agregado $"<<sel2<<" a su cuenta!"<<endl;
				cb[sel-1].setSaldo(cb[sel-1].getSaldo() + sel2); 
				cout<<"su nuevo saldo es de $"<<cb[sel-1].getSaldo()<<endl;
				break;
			
				case 2:
				cout<<"cuanto dinero desea retirar?: ";cin>>sel2;
				if(sel2 > cb[sel-1].getSaldo()){
					cout<<"transaccion denegada, intenta retirar mas saldo del que tiene"<<endl;
				}
				else if(cb[sel-1].getSaldo() < 0){
					cout<<"transaccion denegada, no puede retirar dinero teniendo deudas >:("<<endl;
				}
				else{
					cout<<"transaccion realizada con exito, acaba de retirar $"<<sel2<<endl;
					cb[sel-1].setSaldo(cb[sel-1].getSaldo() - sel2);
					cout<<"su nuevo saldo es de $"<<cb[sel-1].getSaldo()<<endl;
				}
				break;
			
				case 3:
					cout<<"hasta luego, "<<cb[sel-1].getTitular()<<"!"<<endl;
					salirC = true;
				break;
		}
		system("pause");
		system("cls");
	
	}
	
	}	
	
}

