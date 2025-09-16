#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	int num;
	int temp;
	
	cout<<"ingrese la cantidad de juanes de su vector: "; cin>>num;
	
	int juan[num] = {};
	
	for(int i = 0; i < num; i++){
		
	cout<<"ingrese su juan nro "<<i+1<<": "; cin>>juan[i];
	
	}
	
	for(int i = 0; i < num; i++){
		
	cout<<i+1<<": "<<juan[i]<<endl;
	
	}
	
	for(int i = 0; i < num; i++){
		
		for(int i = 0; i < num-1; i++){
			
			if(juan[i] > juan[i+1]){
			
			temp = juan [i];
			juan[i] = juan[i+1];
			juan [i+1] = temp;
			
			}	
			
		}
		
	cout<<"orden ronda "<<i+1<<endl;
	
		for(int i = 0; i < num; i++){
			
		cout<<i+1<<": "<<juan[i]<<endl;
		
		}
		
	}
	
	cout<<"juanes ordenados:"<<endl;
	
	for(int i = 0; i < num; i++){
		
	cout<<i+1<<"-"<<juan[i]<<endl;
	
	}
}