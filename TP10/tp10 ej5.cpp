#include<iostream>
#include<vector>
using namespace std;

class empleado{
	
	private:
		string nombre;
		int salario = 0;
		int departamento = 0;
 		
	public:
		empleado(string nombre, int salario, int departamento) : nombre(nombre), salario(salario), departamento(departamento) {}
		void mostrar() {
	 	cout<<"nombre: "<<nombre<<endl;
	 	cout<<"salario: "<<salario<<endl;
	 	cout<<"nro de departamento: "<<departamento<<endl;
		}
		int getSaldo() { return salario; }
		
};

int main(){
	
	vector<empleado> e;
	vector<empleado> temp;
	string nombre;
	int salario = 0;
	int departamento = 0;
	int cant = 0;
	
	cout<<"ingrese la cantidad de juan empleados: ";cin>>cant;
	cout<<endl;
	
	for(int i = 0; i < cant; i++){
		
		cout<<"ingrese el nombre de su empleado "<<i+1<<": ";cin>>nombre;
		cout<<"ingrese el salario de su empleado "<<i+1<<": ";cin>>salario;
		cout<<"ingrese el nro departamento de su empleado "<<i+1<<": ";cin>>departamento;
		e.push_back(empleado(nombre, salario, departamento));
		temp.push_back(empleado(nombre, salario, departamento));
	}
	cout<<endl;
	
	for(int i = 0; i < cant; i++){
		
		for(int i = 0; i < cant-1; i++){
			
			if(e[i].getSaldo() < e[i+1].getSaldo()){
				temp[i] = e[i];
				e[i] = e[i+1];
				e[i+1] = temp[i];
			}
		}
	}
	
	for(int i = 0; i < cant; i++){
		
		e[i].mostrar();
		cout<<endl;
	}
	
}
