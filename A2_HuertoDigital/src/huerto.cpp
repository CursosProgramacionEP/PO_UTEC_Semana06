//
// Created by Carlos Palomino Vidal on 13/09/26.
//

#include "../include/huerto.h"
#include "../include/matriz.h"
#include <iostream>

void pedirDimensiones(int &filas, int &columnas) {
    do {
        std::cout<< "Ingrese el numero de filas ( mayor a 2): ";
        std::cin >> filas;
    }while (filas<=2);

    do{
        std::cout<< "Ingrese el numero de columnas ( mayor a 2): ";
        std::cin >> columnas;
    }while (columnas<=2);
}

int** filtarPrioridad(int** huerto, int filas, int columnas,bool conservarPares) {
    int** filtrado=crearMatriz(filas,columnas);
    for (int i=0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            bool esPar=huerto[i][j]%2==0;
            if (esPar==conservarPares) {
                filtrado[i][j]=huerto[i][j];
            }else {
                filtrado[i][j]=0;
            }
        }
    }
    return filtrado;
}

void mostrarMenu() {
    std::cout<<"=====HUERTO DIGITAL======="<<std::endl;
    std::cout<<"1. Plantar Cultivos y Mostrar huerto"<<std::endl;
    std::cout<<"2. Mostrar solo cultivos de alto rendimiento"<<std::endl;
    std::cout<<"3. Mostrar solo cultivos organicos"<<std::endl;
    std::cout<<"4. Salir"<<std::endl;
    std::cout<<"Opcion: ";
}
