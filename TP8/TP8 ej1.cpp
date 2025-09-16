#include<iostream>
using namespace std;

class numero{
	
	private:
		int num = 0;
		
	public:
		void iniciar();
		void del1();
	
};

void numero::iniciar(){
	
	cout<<"ingrse su juan: ";cin>>num;
	
}

void numero::del1(){
	
	cout<<"contador hasta "<<num<<endl;
	for(int i = 0; i < num; i++){
		
		cout<<i+1<<endl;
		
	}
}

int main(){
	
	numero n1, n2;
	
	cout<<"numero 1"<<endl;
	n1.iniciar();
	n1.del1();
	
	cout<<endl;
	
	cout<<"numero 2"<<endl;
	n2.iniciar();
	n2.del1();
	
}