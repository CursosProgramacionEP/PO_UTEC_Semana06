//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#ifndef A2_HUERTODIGITAL_HUERTO_H
#define A2_HUERTODIGITAL_HUERTO_H

void pedirDimensiones(int &filas, int &columnas);
//Devuelve una matriz neva donde se conservan los valores de la paraidad
//pedida y el resto queda en cero
int** filtarPrioridad(int** huerto, int filas, int columnas,bool conservarPares);

void mostrarMenu();

#endif //A2_HUERTODIGITAL_HUERTO_H
