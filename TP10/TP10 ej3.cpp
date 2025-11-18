#include<iostream>
#include<vector>
using namespace std;

class rectangulo{
	
	private:
		int base;
		int altura;
		
	public:
		rectangulo(int base, int altura) : base(base), altura(altura) {}
		void calcular() {cout<<"el juan perimetro es: "<<base*altura<<endl;};

};

int main(){
	
	int cant = 0;
	int base = 0;
	int altura = 0;
	vector<rectangulo> rec;
	
	cout<<"ingrese la cantidad de juan rectangulos: ";cin>>cant;
	
	for(int i = 0; i < cant; i++){
		
		cout<<"ingrese la base del juan rectangulo nro"<<i+1<<": ";cin>>base;
		cout<<"ingrese la altura del juan rectangulo: ";cin>>altura;
		rec.push_back(rectangulo(base, altura));
		cout<<endl;
		
	}
	
	cout<<endl;
	
	for(int i = 0; i < cant; i++){
		
		rec[i].calcular();
		
	}	
}

