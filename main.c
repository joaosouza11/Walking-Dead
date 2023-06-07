#include <stdio.h>

int main() {
    int m, n, i, j, k, matrizMain[50][50], matrizAux[50][50], dia;

    //Input - Tamanho da Matriz e Dias
    scanf("%d %d", &m, &n);
    scanf("%d", &i);

    //Input - Dados da Matriz
    for(j=0; j < m; j++) {
        for (k=0; k < n; k++) {
            scanf("%d", &matrizMain[j][k]);
        }
        printf("\n");
    }

    /*
    for(dia=0; dia < i; dia++) {
        printf("\niteracao %d\n", dia);
        for(j=0; j < m; j++) {
            for (k=0; k < n; k++) {
                printf("%d", matrizMain[j][k]);
            }
            printf("\n");
        }

    }
    */

    int a, b, contHumano=0,contZumbie=0, contVazios=0;
    printf("\n Vizinho de [0][0]: ");
    //X[3][8]
    for(j=0; j < m; j++) {
        for(k=0; k < n; k++) {
            if(matrizMain[j][k] != 0) {
                if (matrizMain[j-1][k-1] == 1 || matrizMain[j-1][k] == 1 || matrizMain[j-1][k+1] == 1 ||
                matrizMain[j][k-1] == 1 || matrizMain[j+1][k-1] == 1 || matrizMain[j+1][k] == 1 ||
                matrizMain[j+1][k+1] == 1) {
                    contHumano++;
                } else if (matrizMain[j-1][k-1] == 2 || matrizMain[j-1][k] == 2 || matrizMain[j-1][k+1] == 2 ||
                matrizMain[j][k-1] == 2 || matrizMain[j+1][k-1] == 2 || matrizMain[j+1][k] == 2 ||
                matrizMain[j+1][k+1] == 2) {
                    contZumbie++;
                }
            } else {
                contVazios++;
            }

        }
    }
    printf("Humanos = %d | Zumbies =  %d | Mortos = %d ", contHumano, contZumbie, contVazios);


    return 0;
}
