#include <iostream>
using namespace std; 

int main ()

{
 cout << "Hola, Este programa 5 unidad 3 determinara si un numeroes par y en caso de no serlo si es dividible entre tres";
 
 int num;
 
 cout << "Escribe un numero" <<"\n";
cin>>num;

if (num%2==0) cout << "El numero es par";
else
if (num%3==0) cout<< "El numero es IMPAR y divisible por 3";
else cout<<"El numero es IMPAR es NO DIVISIBLE por 3";

}
