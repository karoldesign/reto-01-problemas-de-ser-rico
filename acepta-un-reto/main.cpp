//---------------------------------------------------------
// Problema <num> <Titulo>
//
// https://www.aceptaelreto.com
//
// <Carolina Chamorro Saldaña>
//---------------------------------------------------------

#include <iostream>
using namespace std;

int getQuantity() {
    
    int nCompartimentos, capacidadMayor, diferencia;
    
    cin >> nCompartimentos >> capacidadMayor >> diferencia;
    
    while (nCompartimentos <= 0 || nCompartimentos > 10000) {
        cin >> nCompartimentos;
    }
    
    while (capacidadMayor <= 0 || capacidadMayor > 10000) {
        cin >> capacidadMayor;
    }
    
    while (diferencia <= 0 || diferencia > 10000) {
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
    
    return total;
    
}

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos;
    
    cin >> numCasos;
    
    if (numCasos > 0) {
        for (int i = 0; i < numCasos; ++i) {
            int num{getQuantity()};
            cout << num << endl;
        }
        
    }
    
    return 0;
    
} // main
