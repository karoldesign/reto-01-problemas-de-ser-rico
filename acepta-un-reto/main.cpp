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
    
    int nCompartimentos, capacidadMayor, diferencia;
    
    cout << "2";
    cin >> nCompartimentos >> capacidadMayor >> diferencia;
    
    while (nCompartimentos <= 0 || nCompartimentos > 10000) {
        cout << "ERROR 1";
        cin >> nCompartimentos;
    }
    
    while (capacidadMayor <= 0 || capacidadMayor > 10000) {
        cout << "ERROR 2";
        cin >> capacidadMayor;
    }
    
    while (diferencia <= 0 || diferencia > 10000) {
        cout << "ERROR 3";
        cin >> diferencia;
    }
    
    int total = capacidadMayor;
    int aux = 0;
    ++aux+= capacidadMayor;
    
    for (int i = 0; i < nCompartimentos - 1; i++) {
        int add = aux - diferencia;
        total += add - 1;
        aux = add;
    }
    
    cout << total;
    
}

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos;
    
    cout << "1: ";
    cin >> numCasos;
    cout << numCasos;
    
    if (numCasos > 0) {
        for (int i = 0; i < numCasos; ++i) {
            getQuantity();
        }
    }
    
    return 0;
    
} // main
