#include<iostream>
#include <unistd.h>
using namespace std;
int main(){
	
	
	int num [3] = {16, 22, 72};
	int rmas = 0;
	int rmenos = 0;
	int rpor = 1;
	int rdiv = 0;
	
	for(int i=0; i < 3; i++){
	
	rmas=rmas+num[i];
	rmenos=rmenos-num[i];
	rpor=num[i]*rpor;
	rdiv=rdiv/num[i];
		
	}
	
	cout<<"resultado (suma): "<<rmas<<endl;
	cout<<"resultado (resta): "<<rmenos<<endl;
	cout<<"resultado (multiplicacion): "<<rpor<<endl;
	cout<<"resultado (division): "<<rdiv<<endl;

}