#include <iostream>

using namespace std;


int main ()
{
	//Mensaje de Bienvenida
	cout << "Hola, este programa le indicara si el Alumno esta Aprobado o Reprobado" << "\n";
	
	//Se declaran las variables (pueden ser decimales)
	int NOTA; 
	
	//Se pide el primer numero 
	cout << "Por favor ingrese la calificacion: ";
	
	//Se asigna el primer valor a NOTA 
	cin>> NOTA; 
	
	
	if (NOTA<3.0) cout << "Reprobado" ; 
	
	//Se muestra el resultado
	
	return 0; 
}
