#include <iostream>
#include "../include/matriz.h"
#include "../include/multiplicacion.h"

int main() {

    int filasA, columnasA;
    int filasB, columnasB;

    pedirOrden(filasA, columnasA, 1);
    pedirOrden(filasB, columnasB, 2);

    if (!sePuedeMultiplicar(columnasA, filasB)) {
        std::cout << std::endl
                  << "No se puede multiplicar: las columnas de la matriz 1 ("
                  << columnasA << ") deben ser iguales a las filas de la matriz 2 ("
                  << filasB << ")." << std::endl;
        return 1;
    }

    int** a = crearMatriz(filasA, columnasA);
    int** b = crearMatriz(filasB, columnasB);

    llenarAleatorio(a, filasA, columnasA, 0, 9);
    llenarAleatorio(b, filasB, columnasB, 0, 9);

    std::cout << std::endl << "Matriz 1 (" << filasA << "x" << columnasA << "):" << std::endl;
    imprimirMatriz(a, filasA, columnasA, 4);

    std::cout << std::endl << "Matriz 2 (" << filasB << "x" << columnasB << "):" << std::endl;
    imprimirMatriz(b, filasB, columnasB, 4);

    int** producto = multiplicarMatrices(a, filasA, columnasA, b, columnasB);

    std::cout << std::endl << "Producto (" << filasA << "x" << columnasB << "):" << std::endl;
    imprimirMatriz(producto, filasA, columnasB, 6);

    liberarMatriz(a, filasA);
    liberarMatriz(b, filasB);
    liberarMatriz(producto, filasA);

    return 0;
}