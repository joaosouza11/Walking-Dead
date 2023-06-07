#include <stdio.h>

int main() {
    int m, n, i, j, k, matrizAux[50][50], matrizMain[50][50], dia;

    scanf("%d %d", &m, &n);
    scanf("%d", &i);

    for(j=0; j < m; j++) {
        for (k=0; k < n; k++) {
            scanf("%d", &matrizMain[j][k]);
        }
        printf("\n");
    }

    int a,b, conth=0, contz=0;
    for(dia=0; dia < i; dia++) {
        printf("\niteracao %d\n", dia);
        for(j=0; j < m; j++) {
            for (k=0; k < n; k++) {

            }
            printf("\n");
        }



        /*
        for(j=0; j < m; j++) {
            for(k=0; k < n; k++) {

            }
        }
         */
    }

    return 0;
}