/*Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
Queremos escribir un programa en C++ que tenga una función llamada
intercambiarJugos que tome dos vasos (representados como variables) y los
intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
cantidades después del intercambio.
*/

#include <iostream>
using namespace std;

//&direccion
//pide la direccion de una variable que yo quiera ( en este caso de jugo de naranja o manzana )

void intercambiar (float &f1, float &f2);

//declaracion de la funcion que intercambia el contenido de dos vasos
void intercambiar (float &f1, float &f2){
    float t = f1;
    f1 = f2;
    f2 = t;
}
int main () {
    float jugonaranja,jugomanzana;

    cout <<"ingrese la cantidad de jugo de naranja en litros"<<  endl;
    cin>> jugonaranja;
    cout << "ingrese la cantidad de jugo de manzana en litros"<<  endl;
    cin>> jugomanzana;

    cout <<"antes del intercambio:" <<endl;
    cout <<"jugo de naranja: "<< jugonaranja <<endl;
    cout <<"jugo de manzana: "<< jugomanzana <<endl;

    intercambiar(jugonaranja, jugomanzana);
    cout <<"despues del intercambio: "<<endl;
    cout <<"jugo de naranja: "<< jugonaranja <<endl;
    cout <<"jugo de manzana: "<< jugomanzana <<endl;

}

