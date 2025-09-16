#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	string paises[5] = {"paraguay", "uruguay", "bolivia", "brasil", "argentina"};
	string temp;
	
	
	for(int i = 0; i < 5; i++){
	
		for(int i = 0; i < 4; i++){
	
			if(paises[i] > paises[i+1]) {
		
			temp = paises[i];
			paises[i] = paises[i+1];
			paises[i+1] = temp;
		
			}
		}
 	}

	cout<<"paises ordenados alfabeticamente"<<endl;
	for(int i = 0; i < 5; i++){
		
		cout<<"1. "<<paises[i]<<endl;
	}
}