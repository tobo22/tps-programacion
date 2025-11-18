#include <iostream>
#include <vector>
using namespace std;
class Alumno {
private:
     string nombre;
     string estado;
     int edad = 0;
     double nota1;
     double nota2;
     double nota3;
public:
     // Constructor
     Alumno(string nombre, int edad, double nota1, double nota2, double nota3)
     : nombre(nombre), edad(edad), nota1(nota1), nota2(nota2), nota3(nota3) {}
     // Getters
     string getNombre() { return nombre; }
     int getEdad() { return edad; }
     double getNota1() { return nota1; }
     double getNota2() { return nota2; }
     double getNota3() { return nota3; }
     string getEstado() { return estado; }
     // Método para calcular el promedio
     double calcularPromedio() { return (nota1 + nota2 + nota3)/ 3; }
     double notaMayor() {
	 	if(nota1 > nota2 && nota1 > nota3) { return nota1; }
		else if (nota2 > nota1 && nota2 > nota3) { return nota2; }
		else { return nota3; }
	}
	double notaMenor() {
	 	if(nota1 < nota2 && nota1 < nota3) { return nota1; }
		else if (nota2 < nota1 && nota2 < nota3) { return nota2; }
		else { return nota3; }
	}
     // Setters
     void setEstado(string e){ estado = e; } 
};

int main() {
 // Vector para almacenar los alumnos
 vector<Alumno> alumnos;
// Ingresar datos de los alumnos y agregarlos al vector
 string nombre;
 string estado;
 string buscar;
 double nota1, nota2, nota3;
 int edad = 0;
 int resultado = 0;
 int numAlumnos;
 int sumaGen = 0;
 bool mostrar;
 
 cout << "Ingrese el número de alumnos: ";
 cin >> numAlumnos;
 for (int i = 0; i < numAlumnos; i++) {
     cout << "Ingrese el nombre del alumno: ";
     cin >> nombre;
     cout << "Ingrese la edad del alumno: ";
     cin >> edad;
     cout << "Ingrese la nota 1 del alumno: ";
     cin >> nota1;
     cout << "Ingrese la nota 2 del alumno: ";
     cin >> nota2;
     cout << "Ingrese la nota 3 del alumno: ";
     cin >> nota3;
     alumnos.push_back(Alumno(nombre, edad, nota1, nota2, nota3));
 }
 cout<<"Ingrese el nombre del usuario que desea ingresar: ";
 cin>>buscar;
 // Mostrar los datos de los alumnos y sus promedios
 for (int i = 0; i < numAlumnos; i++) {
 	
 	if( buscar == alumnos[i].getNombre() ){
 	
 	 	mostrar = true;
 	 	cout<< "Aqui los datos del alumno " << buscar << ": " << endl;
     	cout << "Nombre: " << alumnos[i].getNombre() << endl;
     	cout << "Edad: " << alumnos[i].getEdad() << endl;
     	cout << "Nota 1: " << alumnos[i].getNota1() << endl;
     	cout << "Nota 2: " << alumnos[i].getNota2() << endl;
     	cout << "Nota 3: " << alumnos[i].getNota3() << endl;
     	cout << "Nota mayor: " << alumnos[i].notaMayor() << endl;
     	cout << "Nota menor: " << alumnos[i].notaMenor() << endl;
     	cout << "Promedio: " << alumnos[i].calcularPromedio() << endl;
	 	if( alumnos[i].calcularPromedio() > 6 ){
	 		estado = "aprobado";
	 		alumnos[i].setEstado(estado);
	 	}
	 	else {
	 		estado = "desaprobado";
	 		alumnos[i].setEstado(estado);
	 	}
	 	cout << "Estado del alumno: " << alumnos[i].getEstado() << endl;
     	cout << endl;
 	}
 	
}
 	
if(mostrar == false) {
 		cout << "El nombre '" << buscar << "' no se encuentra en la base de datos" << endl;
}

cout << "Datos generales: " << endl;
for (int i = 0; i < numAlumnos; i++) {
 	
     	cout << "Nombre: " << alumnos[i].getNombre() << endl;
     	cout << "Edad: " << alumnos[i].getEdad() << endl;
     	cout << "Nota 1: " << alumnos[i].getNota1() << endl;
     	cout << "Nota 2: " << alumnos[i].getNota2() << endl;
     	cout << "Nota 3: " << alumnos[i].getNota3() << endl;
     	cout << "Nota mayor: " << alumnos[i].notaMayor() << endl;
     	cout << "Nota menor: " << alumnos[i].notaMenor() << endl;
     	cout << "Promedio: " << alumnos[i].calcularPromedio() << endl;
	 	if( alumnos[i].calcularPromedio() > 6 ){
	 		estado = "aprobado";
	 		alumnos[i].setEstado(estado);
	 	}
	 	else {
	 		estado = "desaprobado";
	 		alumnos[i].setEstado(estado);
	 	}
	 	cout << "Estado del alumno: " << alumnos[i].getEstado() << endl;
     	cout << endl;
     	
    	sumaGen = alumnos[i].calcularPromedio() + sumaGen;
 	}
 	cout << "Promedio general: " << sumaGen / numAlumnos;
 	

return 0;

}
