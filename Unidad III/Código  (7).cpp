#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int palabras, tam, x, y, conta = 0;
    char matriz[10][20];
    float num;

    do {
        printf("Ingresa cuantas palabras: \n");
        scanf("%f", &num);

        if (floor(num) != num || num > 10 || num <= 0) {
            printf("Este numero debe ser un entero entre 1 y 10 \n");
        } else {
            palabras = num;
        }
    } while (floor(num) != num || num > 10 || num <= 0);

    getchar(); // Limpiar el buffer de entrada

    for (y = 0; y < palabras; y++) {
        printf("Dame el escrito %d: \n", y);
        fgets(matriz[y], sizeof(matriz[y]), stdin);

        // Eliminar el carácter de nueva línea del final de la cadena
        if (matriz[y][strlen(matriz[y]) - 1] == '\n') {
            matriz[y][strlen(matriz[y]) - 1] = '\0';
        }
    }

    for (y = 0; y < palabras; y++) {
        tam = strlen(matriz[y]);

        for (x = 0; x < tam; x++) {
            if ((matriz[y][x] >= 'a' && matriz[y][x] <= 'z') || (matriz[y][x] >= 'A' && matriz[y][x] <= 'Z')) {
                if (matriz[y][x] != 'a' && matriz[y][x] != 'A' && matriz[y][x] != 'e' && matriz[y][x] != 'E' &&
                    matriz[y][x] != 'i' && matriz[y][x] != 'I' && matriz[y][x] != 'o' && matriz[y][x] != 'O' &&
                    matriz[y][x] != 'u' && matriz[y][x] != 'U') {
                    conta++;
                }
            }
        }
    }

    printf("La cantidad de consonantes es: %d \n", conta);

    return 0;
}
