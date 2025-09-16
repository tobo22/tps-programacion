#include<iostream>
using namespace std;
int main(){
	
	float num[5] = {9.12, 3.1, 2.2, 1.8, 7.2};
	int menor = 0;
	int mayor = 0;
	int resultado = 0;
	int prom = 0;
	
	for(int i=0; i < 5; i++){
		
	resultado=num[i] + resultado;	
		
	}
	
	prom=resultado/5;
	
	cout<<"el promedio de altura es de "<<prom<<endl;
	
	for(int i=0; i < 5; i++){
		
	if(num[i] < prom){
		
	menor++;
		
	}
	
	else if (num[i] > prom){
		
	mayor++;
	
	}
		
	}
	
	cout<<"hay "<<menor<<" personas mas enanas que 1.74"<<endl;
	cout<<"hay "<<mayor<<" personas mas altas que 1.74"<<endl;
	
	
	
}