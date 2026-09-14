//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#ifndef ROTACION_H
#define ROTACION_H

// Pide el orden de la matriz validando que filas y columnas sean iguales.
int pedirOrden();

// Rota las filas hacia abajo intercambiando punteros: la ultima fila
// pasa a ser la primera. No copia valores.
void rotarFilas(int** matriz, int filas);

// Version alternativa que rota copiando valor por valor.
// Se incluye solo como contraste didactico.
void rotarFilasCopiando(int** matriz, int filas, int columnas);

#endif
