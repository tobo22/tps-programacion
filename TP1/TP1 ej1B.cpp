#include<iostream>
using namespace std;

void ins(string materia);

int main() {
	
	string materia = "matematica";
	ins(materia);
	materia = "historia";
	ins(materia);
	materia = "literatura";
	ins(materia);
	materia = "quimica";
	ins(materia);
	materia = "fisica";
	ins(materia);
	            
}    
	
void ins(string materia){
	
	int cant;
	string alumnos[20];
	
	cout<<"ingrese la cantidad de alumnos que seran inscriptos a "<<materia<<": ";cin>>cant;
	
	for(int i = 0; i < cant; i++){
		
		cout<<"ingrese al alumno nro "<<i+1<<": ";cin>>alumnos[i];
		
	}
	
	cout<<endl;
	cout<<"CANTIDAD DE ALUMNOS INSCRIPTOS:"<<endl;
	
	for(int i = 0; i < cant; i++){
		
		cout<<i+1<<": "<<alumnos[i]<<endl;
		
	}
	
	
	
	
}	
	            
	          
		  