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
void sumarMatrices(int filas, int columnas, int matrizA[filas][columnas], int matrizB[filas][columnas], int resultado[filas][columnas]) {
    int i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int filas, columnas;
    
    printf("Ingrese el número de filas para las matrices: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas para las matrices: ");
    scanf("%d", &columnas);

    // Semilla para números aleatorios
    srand(time(0));
    
    int matrizA[filas][columnas], matrizB[filas][columnas], resultado[filas][columnas];

    printf("Matriz A:\n");
    generarMatrizAleatoria(filas, columnas, matrizA);
    imprimirMatriz(filas, columnas, matrizA);

    printf("\nMatriz B:\n");
    generarMatrizAleatoria(filas, columnas, matrizB);
    imprimirMatriz(filas, columnas, matrizB);

    printf("\nLa suma de las matrices es:\n");
    sumarMatrices(filas, columnas, matrizA, matrizB, resultado);
    imprimirMatriz(filas, columnas, resultado);

    return 0;
}