/*Escribe un programa en C++ que tenga una función llamada marcarAsiento que
tome un puntero a un booleano y lo cambie a true para indicar que el asiento está
reservado. Luego, en la función main, crea un arreglo que represente los asientos
del teatro (inicialmente todos libres), pide al usuario que elija un asiento para
reservar, llama a la función marcarAsiento y muestra el estado de los asientos antes
y después de la reserva.*/


#include <iostream>
using namespace std;

//declaracion de la funcion que marca un asiento como reservado;
void marcarAsiento (bool* asiento) {
    *asiento = true;
}
//es lo mismo que:
//void marcarAsiento (bool asiento[]) {
//asiento[]=true; }

int main () {
    constexpr int num_asientos = 10;
    bool asientos[num_asientos] = {false}; //todos los enteros estan inicializados en cero, libres

    int asientoelegido;

    cout<<"estado inicial de los asientos: "<<endl;
    for (int i=0; i<num_asientos; i++) {
        cout<< "asiento "<< i+1 <<" : " <<(asientos[i] ? "reservado" : "libre") << "\n"; //if asiento[i]=true { cout reservado} else cout libre;
    }

    //solicitar el asiento para reservar
    cout<<"elige un asiento para reservar: ";
    cin>>asientoelegido;

    //validar la eleccion del usuario
    if (asientoelegido <1 || asientoelegido > num_asientos) {
        cout<< "numero de asiento invalido"<< endl;
        return 1;
    }

    //marcar el asiento como elegido
    marcarAsiento(&asientos[asientoelegido -1]); //le resto uno porq el array trabaja de 0 a 9

    cout<<"estado final de los asientos:" <<endl;
    for (int i=0; i<num_asientos; i++) {
        cout<< "asiento "<< i+1 <<" : " <<(asientos[i] ? "reservado" : "libre") << "\n";
    }
    return 0;
}"
