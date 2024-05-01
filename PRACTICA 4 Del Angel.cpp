#include <iostream>
using namespace std; 

int main ()
{ 
//Mensaje de Bienvenida 
cout<< "Hola , este programa te ayudara a calcular el sueldo del trabajador con el aumento correspondiente,si este aplica"; 

//Se declaran las variables
int SUELDO;
int aum;
int nsue; 

//Se pide el primer numero
cout<< "Por favor ingrese el sueldo"; 
 // Se le asigna el valor a SUELDO
 cin>> SUELDO; 
 
if (SUELDO < 400000.00) 
 { 
 aum = SUELDO * 0.15; 
 nsue= SUELDO + aum; 
 }
 else 
 nsue=SUELDO*1.08;
 
 cout<< "El nuevo sueldo es : " <<nsue ;
 //Se muestra el resultado 
 return 0; 
}
