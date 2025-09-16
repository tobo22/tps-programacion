#include<iostream>
using namespace std;
int main() {

	int temp[30];
	int min = 99;
	int max = 0;
	int suma = 0;
	int cont = 0;
	
	
	for(int i=0; i < 30; i++){
		
		cout<<"ingresa la temperatura del dia "<<i+1<<": ";cin>>temp[i];
		suma=suma+temp[i];
		
		if(temp[i] < 10){
			
		cont++;	
		
		}
		
		if(temp[i] < min){
			
		min = temp[i];
			
		}
		
		if(temp[i] > max){
			
		max = temp[i];
			
		}
		
	}
	
	cout<<endl;
	cout<<"la juan temperatura minima del mes fue: "<<min<<" grados celsius"<<endl;
	cout<<"la juan temperatura maxima del mes fue: "<<max<<" grados celsius"<<endl;
	cout<<"el promedio de la juan temperatura es: "<<suma/30<<" grados celsius"<<endl;
	cout<<"hubieron "<<cont<<" dias con juan temperaturas menores a 10 grados celsius"<<endl;
	
	
	

}