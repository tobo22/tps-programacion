#include<iostream>
using namespace std;

class operadores{
	
	private:
		float num1 = 0;
		float num2 = 0;
		
	public:
		operadores();
		void calculos();
		~operadores();
		
};

operadores::operadores(){
	
	cout<<"ingrese el primer juan: ";cin>>num1;
	cout<<"ingrese el segundo juan: ";cin>>num2;
	cout<<endl;
	
}

void operadores::calculos(){
	
	cout<<"suma:"<<endl;
	cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
	cout<<"resta:"<<endl;
	cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
	cout<<"multiplicacion:"<<endl;
	cout<<num1<<"x"<<num2<<"="<<num1*num2<<endl;
	cout<<"division:"<<endl;
	cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
	cout<<endl;
}

operadores::~operadores(){
	
	cout<<"~borrando datos...~"<<endl;
	
}

int main(){
	
	operadores o1;
	o1.calculos();
	
}
