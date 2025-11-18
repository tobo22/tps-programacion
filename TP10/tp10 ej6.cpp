#include<iostream>
#include<vector>
using namespace std;

class libro{
	
	private:
		string titulo;
		string autor;
		int anio = 0;
		
	public:
		libro(string titulo, string autor, int anio) : titulo(titulo), autor(autor), anio(anio) {}
		int getAnio() { return anio; }
		void mostrar(){
			cout<<"mombre: "<<titulo<<endl;
			cout<<"(de "<<autor<<" ["<<anio<<"])"<<endl;
		}
		
};

int main(){

	vector<libro> lib;
	vector<libro> temp;
	string titulo;
	string autor;
	int anio = 0;
	int cant = 0;
	
	cout<<"ingrese la cantidad de libros que almacenara: ";cin>>cant;
	
	for(int i = 0; i < cant; i++){
		cout<<"ingrese el nombre de su juan libro: ";cin>>titulo;
		cout<<"ingrese el autor de "<<titulo<<": ";cin>>autor;
		cout<<"ingrese el año de lanzamiento de "<<titulo<<": ";cin>>anio;
		lib.push_back(libro(titulo, autor, anio));
		temp.push_back(libro(titulo, autor, anio));
	}
	
	for(int i = 0; i < cant; i++){
		
		for(int i = 0; i < cant-1; i++){
			
			if(lib[i].getAnio() > lib[i+1].getAnio()){
				temp[i] = lib[i];
				lib[i] = lib[i+1];
				lib[i+1] = temp[i];
			}
		}
	}
	
	for(int i = 0; i < cant; i++){
		lib[i].mostrar();
		cout<<endl;
	}
	
}
