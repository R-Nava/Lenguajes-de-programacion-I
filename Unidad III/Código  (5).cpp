#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, j, i;
    char nombres[20][20], aux[20];
    
    do {
        printf("Cuantos nombres: \n");
        scanf("%d", &n);
        if (n <= 0 || n > 20) {
            printf("Rango 1-20 \n");
        }
    } while (n <= 0 || n > 20);
    
    printf("ALM NOMBRES \n");
    printf("======================= \n");
    
    // Limpiar el buffer de entrada
    getchar(); // Lee y descarta el carácter de nueva línea
    
    for (i = 0; i < n; i++) {
        printf("Dame el nombre: \n");
        gets(nombres[i]);
        // Eliminar el carácter de nueva línea del final de la cadena
        if (nombres[i][strlen(nombres[i]) - 1] == '\n') {
            nombres[i][strlen(nombres[i]) - 1] = '\0';
        }
    }
    
    // Método burbuja, ordenar los nombres de A-Z
    
    for (j = 0; j < n - 1; j++) {
        for (i = 0; i < n - 1; i++) {
            if (strcmp(nombres[i], nombres[i + 1]) > 0) {
                strcpy(aux, nombres[i]);
                strcpy(nombres[i], nombres[i + 1]);
                strcpy(nombres[i + 1], aux);
            }
        }
    }
    
    // Imprimir los nombres ordenados
    
    printf("LOS NOMBRES ORDENADOS \n");
    printf("====================== \n");
    
    for (i = 0; i < n; i++) {
        printf("%s \n", nombres[i]);
    }
    
    return 0;
}
