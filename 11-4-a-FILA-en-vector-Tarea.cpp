#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> lopez(8); // Definir vector patito con 8 elementos numéricos reales
  
  int opcion;
  do {
    cout << "Menu:\n"
         << "1. Agregar elemento\n"
         << "2. Quitar elemento\n"
         << "3. Mostrar vector\n"
         << "4. Salir\n"
         << "Ingrese una opción: ";
    cin >> opcion;
    switch(opcion) {
      case 1:
        double nuevo_elemento;
        cout << "Ingrese el nuevo elemento: ";
        cin >> nuevo_elemento;
        if(lopez.size() == 8) {
          cout << "El vector está lleno. No se puede agregar más elementos.\n";
        } else {
          lopez.push_back(nuevo_elemento);
          cout << "El elemento ha sido agregado correctamente.\n";
        }
        break;
      case 2:
        if(lopez.empty()) {
          cout << "El vector está vacío. No se puede quitar ningún elemento.\n";
        } else {
          lopez.erase(lopez.begin());
          cout << "El elemento ha sido quitado correctamente.\n";
        }
        break;
      case 3:
        if(lopez.empty()) {
          cout << "El vector está vacío.\n";
        } else {
          cout << "El vector es: ";
          for(double elemento : lopez) {
            cout << elemento << " ";
          }
          cout << endl;
        }
        break;
      case 4:
        cout << "Saliendo...\n";
        break;
      default:
        cout << "Opción inválida. Intente nuevamente.\n";
        break;
    }
  } while(opcion != 4);
  
  return 0;
}
