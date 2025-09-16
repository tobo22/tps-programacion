#include<iostream>
using namespace std;

int f(int num, int &mcd);

int main(){
	
	int num1, num2;
	int mcd1, mcd2;
	
	cout<<"ingrese el primer juan: " ; 	cin>>num1;
	cout<<"ingrese el segundo juan: " ; cin>>num2;
	f(num1, mcd1);
	f(num2, mcd2);
	
	
	

	
	
	if(mcd1 == mcd2){
		
	cout<<"el mcd de ambos es "<<mcd1<<endl;
		
	}
	
	else {
		
	cout<<"el mcd de "<<num1<<" es "<<mcd1<<endl;
	cout<<"mientras que el mcd de "<<num2<<" es "<<mcd2<<endl;
	}
	
	
	
}

int f(int num, int &mcd){

	int m2, m3, m5, m7, m11, m13;
	
	
	
	cout<<"ENCONTRANDO EL MCD DE "<<num<<endl;
	
	while(true){
	
	m2 = num % 2;	
	m3 = num % 3;
	m5 = num % 5;
	m7 = num % 7;
	m11 = num % 11;
	m13 = num % 13;
	
	if(m2 == 0){
		
	cout<<num<<"/"<<2<<"=";
	num=num/2;
	cout<<num<<endl;
	mcd=2;	
		
	}
	
	if(m3 == 0){
		
	cout<<num<<"/"<<3<<"=";
	num=num/3;
	cout<<num<<endl;
	mcd=3;	
		
	}

	
	
	if(m5 == 0){
		
	cout<<num<<"/"<<5<<"=";
	num=num/5;
	cout<<num<<endl;
	mcd=5;		
		
	}
	
	
	if(m7 == 0){
		
	cout<<num<<"/"<<7<<"=";
	num=num/7;
	cout<<num<<endl;
	mcd=7;	
		
	}
	
	
	if(m11 == 0){
		
	cout<<num<<"/"<<11<<"=";
	num=num/11;
	cout<<num<<endl;
	mcd=11;	
	
	}
	
	if(m13 == 0){
		
	cout<<num<<"/"<<13<<"=";
	num=num/13;
	cout<<num<<endl;
	mcd=13;	
	
	}
	
	if(num == 1){
	
	cout<<"el mcd es "<<mcd<<endl;
	system("pause");
	system("cls");
	return 0;	
		
	}
	
	}
	

	
	
	}
	
	
	
