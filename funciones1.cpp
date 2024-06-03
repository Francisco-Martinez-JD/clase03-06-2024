#include <iostream>
using namespace std;
float media(float entero1, float entero2) {
float resultado=0;
resultado = ((entero1 + entero2)/2);
return resultado;
}   

int suma(int entero1, int entero2) {
int resultado=0;
resultado = (entero1 + entero2);
return resultado;
}   

int resta(int entero1, int entero2) {
int resultado=0;
resultado = (entero1 - entero2);
return resultado;
}

int multiplicacion(int entero1, int entero2) {
int resultado=0;
resultado = (entero1 * entero2);
return resultado;
}

float division (float entero1, float entero2) {
float resultado=0;
resultado = (entero1/entero2);
return resultado;
}

int main(){
float n1=0, n2=0, respuesta=0;
char opcion;
cout << "Ingrese dos numeros enteros: \n";
cin >> n1;
cin >> n2;
cout << "Seleccione la operacion que desea realizar: s, r, m, d.\n";
cin >> opcion;
switch (opcion)
{
case 's':
    respuesta=suma(n1,n2);
    cout << "La suma es: "<< respuesta;
    break;
case 'r':
    respuesta=resta(n1,n2);
    cout << "La resta es: "<< respuesta;
    break;
case 'm':
    respuesta=multiplicacion(n1,n2);
    cout << "La multiplicacion es: "<< respuesta;
    break;
case 'd':
    respuesta=division(n1,n2);
    cout << "La division es: "<< respuesta;
    break;
default:
    cout << "Ingrese una opcion valida.\n";
    break;
}
    return 0;
}