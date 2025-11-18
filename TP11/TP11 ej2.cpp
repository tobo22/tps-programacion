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
     string getNombre() const { return nombre; }
     int getEdad() const { return edad; }
     double getNota1() const { return nota1; }
     double getNota2() const { return nota2; }
     double getNota3() const { return nota3; }
     string getEstado() const { return estado; }
     // Método para calcular el promedio
     double calcularPromedio() const { return (nota1 + nota2 + nota3)/ 3; }
     // Setters
     void setEstado(string e){ estado = e; } 
	};
int main() {
 // Vector para almacenar los alumnos
 vector<Alumno> alumnos;
// Ingresar datos de los alumnos y agregarlos al vector
 string nombre;
 string estado;
 double nota1, nota2, nota3;
 int edad = 0;
 int numAlumnos;
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
 // Mostrar los datos de los alumnos y sus promedios
 cout << "\nDatos de los alumnos:" << endl;
 for (auto& alumno : alumnos) {
     cout << "Nombre: " << alumno.getNombre() << endl;
     cout << "Edad: " << alumno.getEdad() << endl;
     cout << "Nota 1: " << alumno.getNota1() << endl;
     cout << "Nota 2: " << alumno.getNota2() << endl;
     cout << "Nota 3: " << alumno.getNota3() << endl;
     cout << "Promedio: " << alumno.calcularPromedio() << endl;
	 if( alumno.calcularPromedio() > 6 ){
	 	estado = "aprobado";
	 	alumno.setEstado(estado);
	 }
	 else{
	 	estado = "desaprobado";
	 	alumno.setEstado(estado);
	 }
	 cout << "Estado del alumno: " << alumno.getEstado() << endl;
     cout << endl;
 }
 return 0;
}
