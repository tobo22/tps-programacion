#include<iostream>
using namespace std;
int main(){
	
	int juan [9] = {9, 12, 22, 3, 1, 7, 26, 11, 4};
	int num;
	int contador = 0;
	

	cout<<"ingrese un juan: "; cin>>num;
	
	for(int i=0; i < 9; i++){
		
		if(num == juan[i]){
			
			system("color 2");
			cout<<"tu juan es igual a la posicion "<<i+1<<" del vector ("<<juan[i]<<")"<<endl;
			contador=contador+1;
			
		}
	
		
	}
	
	if(contador == 0){
		
		system("color 4");
		cout<<"tu juan ("<<num<<") no es igual a ningun valor del vector"<<endl;	
		
	}
	
		
}