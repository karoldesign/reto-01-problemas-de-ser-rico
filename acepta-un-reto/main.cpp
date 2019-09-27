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
    
    unsigned int nCompartimentos, capacidad, diferencia;
    cout << "Número de compartimentos:";
    cin >> nCompartimentos;
    cout << "Capacidad del más grande en litros:";
    cin >> capacidad;
    cout << "Diferencia de litros de dos compartimentos adyacentes:";
    cin >> capacidad;
    
    
}

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos, i;
    
    cin >> numCasos;
    
    if ( numCasos > 0) {
        for (i = 0; i < numCasos; ++i) {
            getQuantity();
        }
    }
    
    return 0;
    
} // main
