#include<iostream>
using namespace std;

int funcion();

int main(){
	
funcion();
	
}

int funcion(){
	
	int num;
	
	cout<<"ingrese su juan menor a 4 cifras: ";cin>>num;
	
	if(num >= 1000){
	
	system("color 4");	
	cout<<"SYNTRAX ERROR: el juan supera las 3 cifras, seras penalizado con la muerte"<<endl;
	return 0;
	
	}
	
	else if(num >= 100){
		
	cout<<"su juan tiene 3 cifras"<<endl;
	
	}
	
	else if(num >= 10){
		
	cout<<"su juan tiene 2 cifras"<<endl;
	
	}
	
	else if(num >= 1){
		
	cout<<"su juan tiene 1 cifra"<<endl;
	
	}
	
	
}