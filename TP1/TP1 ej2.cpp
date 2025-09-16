#include<iostream>
using namespace std;
int main(){

	int nota1, nota2, nota3, promedio;
	
	cout<<"ingrese su primera juan nota"<<endl; cin>>nota1;
	cout<<"ingrese su segunda juan nota"<<endl; cin>>nota2;
	cout<<"ingrese su tercera juan nota"<<endl; cin>>nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	
	if(promedio >= 7){
		
	cout<<"promocionado"<<endl;
	
	}
	
	else if(promedio >= 4){
		
	cout<<"regular"<<endl;
	
	}
	
	else{
		
	cout<<"reprobado"<<endl;	
		
	}
	
	return 0;
	
}