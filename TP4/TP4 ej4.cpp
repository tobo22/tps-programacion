#include<iostream>
using namespace std;
int main() {
	
	int tipo[50];
	float fic = 0, Nfic = 0;
	
	int	edad[50];
	int mayor = 0;
	
	int ed[50];
	int p = 0, sI = 0, sC = 0, t = 0, u = 0;
	
	cout<<"juan encuesta literaria"<<endl;
	
	for(int i = 0; i < 50; i++){
	
		cout<<"encuestado nro "<<i+1<<endl;
		cout<<"tipo de libro: 1.ficcion		2.no ficcion"<<endl;
		cin>>tipo[50];
		cout<<"edad"<<endl;
		cin>>edad[50];
		cout<<"educacion: 1.primaria		2.secundaria incompleta		3.secuundaria completa		4.terciaria		5.univercitaria"<<endl;
		cin>>ed[50];
		
		if(edad[50] > 17){
			
			mayor++;
			
		}
		
		if(tipo[50] == 1){
			
			fic++;
			
		}
		
		if(tipo[50] == 2){
			
			Nfic++;
			
		}
		
		if(ed[50] == 1){
			
			p++;
			
		}
		
		if(ed[50] == 2){
			
			sI++;
			
		}
		
		if(ed[50] == 3){
			
			sC++;
			
		}
		
		if(ed[50] == 4){
			
			t++;
			
		}
		
		if(ed[50] == 5){
			
			u++;
			
		}
	
	}
	
	cout<<endl;
	cout<<"encuestados mayores a 18: "<<mayor<<endl;
	cout<<"% de lectores de ficcion: %"<<(fic/50)*100<<endl;
	cout<<"% de de lectores de no ficcion: %"<<(Nfic/50)*100<<endl;
	cout<<"encuestados cursando primaria: "<<p<<endl;
	cout<<"encuestados cursando secundaria: "<<sI<<endl;
	cout<<"encuestados con secundaria finalizada: "<<sC<<endl;
	cout<<"encuestados cursando terciaria: "<<t<<endl;
	cout<<"encuestados cursando universidad: "<<u<<endl;
	
}