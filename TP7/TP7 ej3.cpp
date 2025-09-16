#include<iostream>
#include<vector>
using namespace std;

void iniciar(int vec[2]){
	
	for(int i = 0; i < 2; i++){
		
		cout<<"ingrese el juan nro "<<i+1<<": ";cin>>vec[i];
		
	}
	
	cout<<endl;
	
}

void sumar(int vec1[2], int vec2[2], int vec3[2]){
		
	int num = 0;
	
	for(int i = 0; i < 2; i++){
		
		num = vec1[i] + vec2[i];
		cout<<"pos "<<i<<": v1("<<vec1[i]<<") + v2("<<vec2[i]<<") = "<<num<<endl;
		num = vec1[i] + vec2[i];
		vec3[i] = num;
		
	}
	
}


void mostrar(int vec[2]){
	
	for(int i = 0; i < 2; i++){
		
		cout<<"pos "<<i<<": "<<vec[i]<<endl;
		
	}
	
	cout<<endl;
	
}


int main(){
	
	int vec1[2];
	int vec2[2];
	int vec3[2];
	
	iniciar(vec2);
	sumar(vec1, vec2, vec3);
	cout<<"vector 3"<<endl;
	mostrar(vec3);

}

