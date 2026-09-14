//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#include "../include/rotacion.h"
#include <iostream>

int pedirOrden() {
    int filas, columnas;
    do {
        std::cout << "Filas: ";
        std::cin >> filas;
        std::cout << "Columnas: ";
        std::cin >> columnas;
        if (filas != columnas) {
            std::cout << "La matriz debe ser cuadrada. Intente de nuevo." << std::endl;
        }
    } while (filas != columnas || filas <= 0);
    return filas;
}

void rotarFilas(int** matriz, int filas) {
    // Se guarda el puntero de la ultima fila, las demas bajan una posicion
    // y la guardada ocupa el primer lugar. Los datos nunca se mueven.
    int* ultima = matriz[filas - 1];
    for (int i = filas - 1; i > 0; i--) {
        matriz[i] = matriz[i - 1];
    }
    matriz[0] = ultima;
}

void rotarFilasCopiando(int** matriz, int filas, int columnas) {
    // Hace lo mismo, pero moviendo cada entero uno por uno.
    int* temporal = new int[columnas];
    for (int j = 0; j < columnas; j++) {
        temporal[j] = matriz[filas - 1][j];
    }
    for (int i = filas - 1; i > 0; i--) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = matriz[i - 1][j];
        }
    }
    for (int j = 0; j < columnas; j++) {
        matriz[0][j] = temporal[j];
    }
    delete[] temporal;
}