#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char escrito[10][20];
    int conta = 0, tam = 0, y = 0, x = 0, n = 0;
    
    do {
        printf("Cuantos escritos: \n");
        scanf("%d", &n);
        
        if (n <= 0 || n > 10) {
            printf("Fuera de rango \n");
        }
    } while (n <= 0 || n > 10);
    
    // Limpiar el buffer de entrada
    getchar(); // Lee y descarta el carácter de nueva línea
    
    for (y = 0; y < n; y++) {
        printf("Dame el escrito %d: \n", y);
        gets(escrito[y]);
        
        // Eliminar el carácter de nueva línea del final de la cadena
        if (escrito[y][strlen(escrito[y]) - 1] == '\n') {
            escrito[y][strlen(escrito[y]) - 1] = '\0';
        }
    }
    
    for (y = 0; y < n; y++) {
        tam = strlen(escrito[y]);
        
        for (x = 0; x < tam; x++) {
            if (escrito[y][x] == 'a' || escrito[y][x] == 'A') {
                conta++;
            }
        }
    }
    
    printf("%d\n", conta);
    
    return 0;
}
