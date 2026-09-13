//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#include "../include/matriz.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

int** crearMatriz(int filas, int columnas) {
    //primero el arreglo de punteros (una posicion por fila)
    //luego cada fila es un arreglo independiente de enteros
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    return matriz;
}

void llenarAleatorio(int** matriz, int filas, int columnas, int minimo, int maximo) {
    srand(time(nullptr));
    int rango = maximo - minimo + 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % rango;
        }
    }
}

void imprimirMatriz(int** matriz, int filas, int columnas,int ancho) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout <<std::setw(ancho)<<matriz[i][j];
        }
        std::cout << std::endl;
    }
}
void liberarMatriz(int** &matriz, int filas) {
    if (matriz == nullptr) return;
    //se linera en orden inverso a la reserva: primero cada fila
    //al final el arregoo de punteros
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    //libera la variable por eso se paso por referncia
    matriz = nullptr;
}