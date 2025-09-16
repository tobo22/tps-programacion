#include<iostream>
using namespace std;
int main() {
	
	int sino;
	int prod;
	int cant = 0;
	float prod1 = 0, prod2 = 0, prod3 = 0;
	int may = 0;
	string mayS;
	
	while(true){
	
	cout<<"desea realizar esta juan encuesta?"<<endl;
	cout<<"1.si		2.no"<<endl;
	cin>>sino;
	
	if(sino == 2){
		
		cout<<"perdon por la molestia (gil)"<<endl;
		return main();
		
	}
	
	if(sino == 1){
		
		cant++;
		cout<<"perfecto, comenzemos!"<<endl;
		
		cout<<endl;
		
		cout<<"lista de productos:"<<endl;
		cout<<"1. hernan (dinosaurio)"<<endl;
		cout<<"2. flstudio a mitad de precio"<<endl;
		cout<<"3. tec zombies (novela)"<<endl;
		cout<<"que producto escojera?: ";cin>>prod;
		
		if(prod == 1){
			
			prod1++;
			
		}
		
			if(prod == 2){
			
			prod2++;
			
		}
		
			if(prod == 3){
			
			prod3++;
			
		}
		
		for(int i = 0; i < 3; i++){
	
			if(prod1 > may){
			
				may = prod1;
				mayS = "hernan";
			
			}
		
			if(prod2 > may){
			
				may = prod2;
				mayS = "flstudio";
			
			}
		
			if(prod3 > may){
			
				may = prod3;
				mayS = "tec zombies";
			
			}
		
		}
	
		cout<<endl;
		cout<<"votos hasta el momento"<<endl;
		cout<<"lider: "<<mayS<<endl;
		cout<<"1 (%"<<(prod1/cant)*100<<")"<<endl;
		cout<<"2 (%"<<(prod2/cant)*100<<")"<<endl;
		cout<<"3 (%"<<(prod3/cant)*100<<")"<<endl;
		cout<<"(cantidad total de votos: "<<cant<<")"<<endl;
	
	
	}
	
	system("pause");
	system("cls");
	
}

}