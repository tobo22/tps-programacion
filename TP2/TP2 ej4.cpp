#include<iostream>
using namespace std;
int main(){
	
	int num[10] = {16, 22, 72, 4, 912, 31, 53, 2022, 2018, 69};
	int numM = 0;
	int numN = 99999999;
	
	for(int i = 0; i < 10; i++){
		
	if(numM < num[i]){
		
	numM = num[i];	
		
	}
	
	if(numN > num[i]){
		
	numN = num[i];	
		
	}
	
	
	}
	
	cout<<"el juan menor de su hermoso vector es el "<<numN<<endl;
	cout<<"el juan mayor de su hermoso vector es el "<<numM<<endl;
	
	
	
	
}