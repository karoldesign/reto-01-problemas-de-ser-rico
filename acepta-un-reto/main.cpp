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
    
    // Primero creamos el array con el número de espacios que tenga los compartimentos
    int total = 0;
    
    //Añadimos la capacidad del mayor
    ++total+= capacidadMayor;
    
    for (i = 0; i < nCompartimentos; i++) {
        int add = capacidadMayor - diferencia;
        ++total+= add;
    }
    
    // Después de añadir en el array todas las cantidades de los compartimentos, entonces sumamos
    
    
    
    
    
    
    
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
