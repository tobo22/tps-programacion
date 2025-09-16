#include<iostream>
using namespace std;

int funcion();

int main(){
	
funcion();
	
	
}

int funcion(){
	
	float cantidad, calidad, promedio;
	
	cout<<"ingrese la cantidad de juanes...digo preguntas que tuvo usted en el examen: ";cin>>cantidad;
	cout<<"ahora ingrese la cantidad de preguntas que contesto bien: ";cin>>calidad;
	
	system("pause");
	cout<<"..."<<endl;
	system("pause");
	system("cls");
	if(calidad == 0){
		
	cout<<"nose para que usas este programa, claramente reprobaste"<<endl;
	return 0;
	
	}
	
	promedio = (calidad/cantidad)*100;
	
	if(promedio == 100){
		
	system("color 5");	
	cout<<"felicidades, con tu "<<promedio<<"% llegaste al nivel maximo!"<<endl;
	cout<<"(igual nose para que usas el programa si claramente contestando todo bien vas a aprobar)"<<endl;
	
	}
	else if(promedio >= 90){
	
	system("color 1");	
	cout<<"felicidades, con tu "<<promedio<<"% llegaste al nivel maximo!"<<endl;
	
	}
	
	else if(promedio >= 75){
	
	
	system("color 2");	
	cout<<"felicidades(?, con tu "<<promedio<<"% llegaste al nivel medio!"<<endl;
	
	}
	
	else if(promedio >= 50){
		
	system("color 6");
	cout<<"bueno...con tu "<<promedio<<"% al menos no diste pena"<<endl;
	
	}
	
	else if(promedio < 50){
		
	system("color 4");	
	cout<<"te sacaste..."<<promedio<<"% fuerza y pronta recuperacion para tu familia"<<endl;
	
	}	
	
}