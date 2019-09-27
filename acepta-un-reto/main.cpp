//---------------------------------------------------------
// Problema <num> <Titulo>
//
// https://www.aceptaelreto.com
//
// <Carolina Chamorro Saldaña>
//---------------------------------------------------------

#include <iostream>
using namespace std;

void getQuantity() {
    
    unsigned int nCompartimentos, capacidad, diferencia, i;
    
    cout << "Número de compartimentos, capacidad del más grande en litros y diferencia de litros de dos compartimentos adyacentes:";
    
    cin >> nCompartimentos >> capacidad >> diferencia;
    
    while (nCompartimentos <= 0 || nCompartimentos > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> nCompartimentos;
    }
    
    while (capacidad <= 0 || capacidad > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> capacidad;
    }
    
    while (diferencia <= 0 || diferencia > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> diferencia;
    }
    
    for (i = 0; i < nCompartimentos; i++) {
        
    }
    
    
    
    
}

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos, i;
    
    cout << "Número de casos: ";
    cin >> numCasos;
    
    if ( numCasos > 0) {
        for (i = 0; i < numCasos; ++i) {
            getQuantity();
        }
    }
    
    return 0;
    
} // main
