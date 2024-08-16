/*Crear una clase calculadora, dicha clase debe tener los métodos sumar, restar,
dividir, multiplicar que realizarán operaciones en dos propiedades A y B. En el
metodo dividir verifique que el divisor no es 0. Si el divisor es 0, arroje una
excepción*/

#include <iostream>
using namespace  std;

//declaracion de clase calculadora
class calculadora {
private:
    double A;
    double B;
public:
    calculadora(double a, double b){A = a, B =b;};
    double suma () const;
    double resta () const;
    double prod () const;
    double conc () const;
};

double calculadora::suma() const {
    return A+B;
}
double calculadora::resta() const {
    if (A>B) {return A-B;}
    return B-A;
}
double calculadora::prod() const {
    return A*B;
}
double calculadora::conc() const {
  if(B==0) {
      throw R"(error:division por cero)";
  }
    return A/B;
}

int main () {
    calculadora cal(4.8,0);
    int op;
    while ( op>0 && op<5) {
        cout<<"que operacion desea realizar: "<<endl;
        cout<<"1.sumar"<<endl;
        cout<<"2.restar"<<endl;
        cout<<"3.multiplicar"<<endl;
        cout<<"4.dividir"<<endl;
        cout<<"5.salir "<<endl;
        cin>>op;

        switch (op){
            case 1:cout<< "resultado de la suma: "<<cal.suma()<<endl;
            break;
            case 2: cout<< "resultado de la resta: "<<cal.resta()<<endl;
            break;
            case 3: cout<< "resultado del producto: "<<cal.prod()<<endl;
            break;
            case 4: try {
                double resultado = cal.conc();
                cout<< "resultado de la division: "<<resultado<<endl;
            } catch (const char *error) {
                cout<<error<<endl;
            }
            break;
            case 5: exit(-1);
        default: cout<<"error en la opcion"<<endl;
        }
    }
    return 0;
}