/*Escribe un programa en C++ que calcule el factorial de un número entero positivo
usando un bucle.
*/
#include <iostream>
using namespace std;

//QUEDA EN PAUSA LA ACCI�N HASTA QUE LLEGA A BASE Y LUEGO VUELVE

unsigned long long factorialrecursivo (int n) {
    if ( n == 0) {
        //condicion de base
        return 1;
    }
    else {
        return n * factorialrecursivo(n-1);
    }
}

// n vale 3
// 3 = 0 NO
// n=3 * lo que retorne de 3-1 (2)
// n vale 2
// 2 = 0 NO
// n = 2 * lo que retorne de 2-1 (1)
// n vale 1
// 1 = 0 NO
// n = 1* lo que retorne de 1-1 (0)
// n vale 0
// 0 = 0 SI, devuelve 1 a anterior
// n = 1* 1 (devolvio de 1-1);  devuelve 1
// n = 2* 1 (devolvio de 2-1) ; devuelve 2
// n = 3*2 (devolvio de 3-1); devuelve 6



int main () {
    unsigned long long factorial = 1;
    int n;

    cout << "ingrese numero que desee el factorial: "<< endl;
    cin>> n;

    if (n<0) {
        cout << "el factorial no est� definido para negativos" <<endl;
    }
    else {

        for (int i=1; i<= n; i++){
            factorial *= i; //simplificacion ->  factorial =  factorial*1

        }

        cout << "el factorial de "<<n<<" por iteratividad es: "<<factorial<< endl;

        cout << "el factorial de "<<n<<" por recursividad es: " << factorialrecursivo(n);


    }

    return 0;
}
