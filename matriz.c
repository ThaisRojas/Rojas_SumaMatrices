#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generarMatrizAleatoria(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Números aleatorios entre 0 y 100
        }
    }
}
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]); // LLena la matriz con numeros entre 0 y 100
        }
        printf("\n");
    }
}