#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;


string obtenerFechaHora() {
    time_t t = time(0);
    struct tm * now = localtime(&t);
    char fechaHora[20];
    strftime(fechaHora, sizeof(fechaHora), "%d/%m/%Y %H:%M:%S", now);
    return string(fechaHora);
}



int main() {
    const int SALTA = 60;
    const int JUJUY = 80;
    const int FORMOSA = 100;
    const int SAN_LUIS = 25;

    
    cout << "Opciones de viaje:" << endl;
    cout << "=================================" << endl;
    cout << "1. Salta - $ " << SALTA << endl;
    cout << "2. Jujuy - $ " << JUJUY << endl;
    cout << "3. Formosa - $ " << FORMOSA << endl;
    cout << "4. San Luis - $ " << SAN_LUIS << endl;

    
    int opcion;
    cout << "Ingrese el numero de la opcion deseada (1-4): "<< endl;
    cin >> opcion;

    int precio;
    switch(opcion) {
        case 1: precio = SALTA; break;
        case 2: precio = JUJUY; break;
        case 3: precio = FORMOSA; break;
        case 4: precio = SAN_LUIS; break;
        default:
            cout << "Opcion invalida. Saliendo del programa." << endl;
            return 1;
    }

    
    int dineroIngresado = 0;
    int totalIngresado = 0;
    
    while (totalIngresado < precio) {
        cout << "Ingrese la cantidad de dinero (Faltan $ " << (precio - totalIngresado) << "): $ ";
        cin >> dineroIngresado;
        totalIngresado += dineroIngresado;
        
        if (totalIngresado < precio) {
            cout << "Falta dinero. Necesita $ " << (precio - totalIngresado) << " mas." << endl;
        }
    }

    
    cout << "Pago completado." << endl;

    
    
    string fechaHora = obtenerFechaHora();

    cout << "=================================" << endl;
    cout << "Boleto de Viaje" << endl;
    cout << "=================================" << endl;
    cout << "Destino: ";
    switch(opcion) {
        case 1: cout << "Salta"; break;
        case 2: cout << "Jujuy"; break;
        case 3: cout << "Formosa"; break;
        case 4: cout << "San Luis"; break;
    }
    cout << endl;
    cout << "Precio: $ " << precio << endl;
    cout << "Fecha y hora de salida: " << fechaHora << endl;
    cout << "=================================" << endl;

    return 0;
}
