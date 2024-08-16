/*Escribe un programa en C++ que tenga una función llamada agregarContacto que
tome un vector<string> por referencia y dos string (uno para el nombre y otro para el
número de teléfono) y los agregue a la lista de contactos en formato "Nombre:
Número". También tendrá una función llamada mostrarContactos que tome un
vector<string> por referencia y muestre todos los contactos en la lista. En la función
main, permite al usuario agregar contactos y mostrar la lista de contactos hasta que
decida salir mediante el uso de un menú*/

#include <iostream>
#include <vector>
#include <string>
using namespace  std;

void agregarcontacto (vector<string> &contactos , const string &nombre, const string &telefono) {
  const string contacto = nombre +": " + telefono;
contactos.push_back(contacto);
}

void mostrarcontactos (const vector<string> &contactos) { // pasas el vector contactos por referencia a las funciones agregarcontacto y mostrarcontactos
  if (contactos.empty()) {                                  // se hace para evitar copiar el vector entero, lo que sería menos eficiente
    cout << "No hay contactos para mostrar." << endl;
    return;
  }
  for (size_t i= 0; i<contactos.size(); i++) {
    cout<<i+1<<". "<<contactos[i]<< "\n";
  }
}
//vector<string> &contactos es una referencia al vector original.
//Cambios en contactos dentro de agregarcontacto se reflejarán en el vector original en la función main.
int main () {
  vector<string> contactos;
  string nombre, telefono;
  int op;

  do {
    cout<<"eliga una opcion: "<<endl;
    cout<<"1. agregar contacto: "<<endl;
    cout<<"2. mostrar contacto: "<<endl;
    cout<<"4. salir"<<endl;
    cin>>op;
    cin.ignore();// Limpiar el buffer del cin para evitar problemas con getline

    switch (op) {
      case 1: cout<<"ingrese nombre: "<<endl;
      getline(cin, nombre);
      cout<<"ingrese telefono: "<<endl;
      getline(cin, telefono);// Permite leer entradas completas, incluyendo espacios
      agregarcontacto(contactos, nombre, telefono);
      break;
      case 2:
       mostrarcontactos(contactos);
      break;
      case 3: cout<<"saliendo del programa"<<endl;
      break;
      default:cout<<"error en la opcion"<<endl;
      break;
    }
  }while (op != 3);
return 0;
}