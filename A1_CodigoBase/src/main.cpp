#include <iostream>
#include "../include/matriz.h"
using namespace std;

int main() {
    int filas,columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    if (filas<=0 || columnas<=0){
        cout << "Error: El numero de filas y columnas debe ser mayor a cero." << endl;
        return 1;
    }

    int** matriz = crearMatriz(filas,columnas);
    llenarAleatorio(matriz,filas,columnas,1,100);
    imprimirMatriz(matriz,filas,columnas);
    liberarMatriz(matriz,filas);

    return 0;
 }