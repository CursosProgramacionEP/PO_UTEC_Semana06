#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

// Pide el orden de una matriz identificada por su numero.
void pedirOrden(int& filas, int& columnas, int numero);

// La multiplicacion existe solo si las columnas de A igualan las filas de B.
bool sePuedeMultiplicar(int columnasA, int filasB);

// Devuelve una matriz nueva de filasA x columnasB con el producto A * B.
int** multiplicarMatrices(int** a, int filasA, int columnasA,
                          int** b, int columnasB);

#endif
