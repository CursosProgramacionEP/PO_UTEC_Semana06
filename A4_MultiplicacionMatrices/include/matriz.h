//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#ifndef A1_CODIGOBASE_MATRIZ_H
#define A1_CODIGOBASE_MATRIZ_H

//Reserva en el heap una matriz de filas por columnas y devuelve el puntero doble
int** crearMatriz(int filas, int columnas);
//Llena la matriz con enteros aleatorios en el rango (macimo,minimo)
void llenarAleatorio(int** matriz, int filas, int columnas, int minimo, int maximo);
//imprime la matriz en formato de tabla
void imprimirMatriz(int** matriz, int filas, int columnas,int ancho=5);
//Libera la memoria de la matriz y pone el puntero a nullpt
void liberarMatriz(int** &matriz, int filas);


#endif //A1_CODIGOBASE_MATRIZ_H
