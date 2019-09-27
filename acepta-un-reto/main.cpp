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
    
    unsigned int nCompartimentos, capacidadMayor, diferencia, i;
    
    cout << "Número de compartimentos, capacidad del más grande en litros y diferencia de litros de dos compartimentos adyacentes:";
    
    cin >> nCompartimentos >> capacidadMayor >> diferencia;
    
    while (nCompartimentos <= 0 || nCompartimentos > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> nCompartimentos;
    }
    
    while (capacidadMayor <= 0 || capacidadMayor > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> capacidadMayor;
    }
    
    while (diferencia <= 0 || diferencia > 10000) {
        cout << "Tiene que ser > 0 y < que 10.000:";
        cin >> diferencia;
    }
    
    // Total de litros
    int total = capacidadMayor;
    int aux = 0;
    ++aux+= capacidadMayor;
    
    for (i = 0; i < nCompartimentos - 1; i++) {
        int add = aux - diferencia;
        total += add - 1;
        aux = add;
        
    }
    
    return total;
    
}

//---------------------------------------------------------

int main() {
    
    unsigned int numCasos, i;
    
    cout << "Número de casos: ";
    cin >> numCasos;
    
    if ( numCasos > 0) {
        for (i = 0; i < numCasos; ++i) {
            int num = 0;
            num = getQuantity();
            cout << num;
        }
    }
    
    return 0;
    
} // main
