#include <iostream>
#include "../include/matriz.h"
#include "../include/rotacion.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    srand(time(nullptr));

    int n = pedirOrden();

    int** matriz = crearMatriz(n, n);
    llenarAleatorio(matriz, n, n, 0, 99);

    std::cout << std::endl << "Matriz original:" << std::endl;
    imprimirMatriz(matriz, n, n, 4);

    rotarFilas(matriz, n);

    std::cout << std::endl << "Matriz rotada:" << std::endl;
    imprimirMatriz(matriz, n, n, 4);

    liberarMatriz(matriz, n);
    return 0;
}