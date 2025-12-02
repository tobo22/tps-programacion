#include<iostream>
using namespace std;

class punto {
	
	private:
		int x, y;
		
	public:
		punto();
		punto (int a, int b);
		void mostrar();
	
};

punto::punto(){
	
	cout<<"ingrese el valor de x: ";cin>>x;
	cout<<"ingrese el valor de y: ";cin>>y;
	
}

punto::punto(int a, int b){
	
	x = a;
	y = b;
	
}

void punto::mostrar(){
	
	cout<<"valores"<<endl;
	cout<<"x: "<<x<<endl;
	cout<<"Y: "<<y<<endl;
	
}

int main(){
	
	punto p1, p2(9,12);
	p1.mostrar();
	p2.mostrar();
	
	
}
