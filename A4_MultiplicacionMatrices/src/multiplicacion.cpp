//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#include "../include/multiplicacion.h"
#include "../include/matriz.h"
#include "iostream"

void pedirOrden(int& filas, int& columnas, int numero) {
    do {
        std::cout << "Filas de la matriz " << numero << ": ";
        std::cin >> filas;
        std::cout << "Columnas de la matriz " << numero << ": ";
        std::cin >> columnas;
    } while (filas <= 0 || columnas <= 0);
}

bool sePuedeMultiplicar(int columnasA, int filasB) {
    return columnasA == filasB;
}


int** multiplicarMatrices(int** a, int filasA, int columnasA,
                          int** b, int columnasB) {
    int** resultado = crearMatriz(filasA, columnasB);

    // Cada celda del resultado es la suma de los productos de una fila
    // de A por una columna de B. columnasA marca cuantos terminos se suman.
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            int suma = 0;
            for (int k = 0; k < columnasA; k++) {
                suma += a[i][k] * b[k][j];
            }
            resultado[i][j] = suma;
        }
    }
    return resultado;
}