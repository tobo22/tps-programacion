#include<iostream>
using namespace std;

class sumatoria{
	
	private:
		int num = 0;
		int suma = 0;
		
	public:
		sumatoria();
		~sumatoria();
		
};

sumatoria::sumatoria(){
	
	do {
		
		cout<<"ingrese el valor de su juan: ";cin>>num;
		suma=suma+num;
		
	}
	
	while(num != 0);
}

sumatoria::~sumatoria(){

	cout<<"la suma de los numeros ingresados antes de llegar a cero es de: "<<suma<<"!"<<endl;
	cout<<"~borrando datos...~"<<endl;

}

int main(){
	
	sumatoria s1;
	
	
}
