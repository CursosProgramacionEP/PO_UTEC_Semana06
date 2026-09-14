#include <iostream>
#include "../include/matriz.h"
#include "../include/huerto.h"
 // TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    int** huerto=nullptr;
    int filas=0,columnas=0;
    int opcion;

    do {
        mostrarMenu();
        std::cin>>opcion;
        switch (opcion) {
            case 1:
                if (huerto!=nullptr) {
                    liberarMatriz(huerto,filas);
                }
                pedirDimensiones(filas,columnas);
                huerto=crearMatriz(filas,columnas);
                llenarAleatorio(huerto,filas,columnas,1,100);
                std::cout<<"Huerto creado "<<huerto<<std::endl;
                imprimirMatriz(huerto,filas,columnas);
                break;
            case 2:
                if (huerto==nullptr) {
                    std::cout<<"Primero debe crear el huerto"<<std::endl;
                }else {
                    bool conservarPares=1;
                    int** filtrar=filtarPrioridad(huerto,filas,columnas,conservarPares);
                    std::cout<<"Huerto filtrado "<<filtrar<<std::endl;
                    imprimirMatriz(filtrar,filas,columnas);
                }
                break;
            case 3:
                if (huerto==nullptr) {
                    std::cout<<"Primero debe crear el huerto"<<std::endl;
                }else {
                    bool conservarPares=0;
                    int** filtrar=filtarPrioridad(huerto,filas,columnas,conservarPares);
                    std::cout<<"Huerto filtrado "<<filtrar<<std::endl;
                    imprimirMatriz(filtrar,filas,columnas);
                }
                break;
            case 4:
                if (huerto!=nullptr) {
                    liberarMatriz(huerto,filas);
                }
                std::cout<<"Saliendo del programa"<<std::endl;
                break;
            default:
                std::cout<<"Opcion invalida"<<std::endl;
                break;
        }
    }while (opcion!=4);



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}