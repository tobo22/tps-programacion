#include<iostream>
using namespace std;

class socio {
	
	private:
	string nombre;
	int antiguedad;
	
	public:
	socio(){
		cout<<"ingrese el nombe del socio: ";cin>>nombre;
		cout<<"ingrese la antiguedad: ";cin>>antiguedad;
	}
	void mostrar() {
		cout<<"nombre: "<<nombre<<endl;
		cout<<"antiguedad: "<<antiguedad<<endl;
	}
	
	int getAntiguedad() { return antiguedad; }
	
};

class club {
	socio s1, s2, s3;
	
	public:
	void imprimir();
	
};

void club::imprimir(){
		
	if(s1.getAntiguedad() > s2.getAntiguedad() && s1.getAntiguedad() > s3.getAntiguedad()){
				
		cout<<"el socio mayor es:"<<endl;
		s1.mostrar();
	
	}
	
	else if(s2.getAntiguedad() > s1.getAntiguedad() && s2.getAntiguedad() > s3.getAntiguedad()){
				
		cout<<"el socio mayor es:"<<endl;
		s2.mostrar();
	
	}
	
	else {
				
		cout<<"el socio mayor es:"<<endl;
		s3.mostrar();
	
	}
	
	
	
}

int main(){
	
	club c1;
	c1.imprimir();
	
	
}
