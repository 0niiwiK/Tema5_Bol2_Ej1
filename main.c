#include <stdio.h>
#define N 3

void leeMatriz(int m[][N]);
void copiaMatriz(int m1[][N], int m2[][N]);
void imprimeMatriz(int m[][N]);

int main() {
    int matriz[N][N], copia[N][N];
    leeMatriz(matriz);
    copiaMatriz(matriz, copia);
    imprimeMatriz(copia);
    return 0;
}

void leeMatriz(int m[][N]){
    int num;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&num);
            fflush(stdin);
            m[i][j]=num;
        }
    }
}

void copiaMatriz(int m1[][N], int m2[][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m2[i][j]=m1[i][j];
        }
    }
}

void imprimeMatriz(int m[][N]){
    printf("\n|-------|-------|-------|\n");
    for (int i = 0; i < N; ++i) {
        printf("|");
        for (int j = 0; j < N; ++j) {
            printf("%4d   |",m[i][j]);
        }
        printf("\n|-------|-------|-------|\n");
    }
}