#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char escrito[10][10], copia[20];
    int tam, y, x, n;
    
    do {
        printf("Ingrese la cantidad de escritos: \n");
        scanf("%d", &n);
        getchar(); // Consumir el carácter de nueva línea en el buffer
    } while (n <= 0 || n > 10);
    
    for (y = 0; y < n; y++) {
        printf("Dame el escrito: \n");
        fgets(escrito[y], sizeof(escrito[y]), stdin);
        // Eliminar el carácter de nueva línea del final de la cadena
        if (escrito[y][strlen(escrito[y]) - 1] == '\n') {
            escrito[y][strlen(escrito[y]) - 1] = '\0';
        }
    }
    
    for (y = 0; y < n; y++) {
        tam = strlen(escrito[y]); // tamaño del escrito
        strcpy(copia, escrito[y]); // copiar el escrito original
        
        for (x = 0; x < tam; x++) {
            // Verificar si es letra
            if (isalpha(escrito[y][x])) {
                printf("%c es letra. \n", escrito[y][x]);
            } 
            // Verificar si es dígito
            else if (isdigit(escrito[y][x])) {
                printf("%c es digito. \n", escrito[y][x]);
            } 
            // Si no es letra ni dígito, es otro
            else {
                printf("%c es otro. \n", escrito[y][x]);
            }
        }
        
        // Convertir el escrito a mayúsculas
        for (x = 0; x < tam; x++) {
            escrito[y][x] = toupper(escrito[y][x]);
        }
        
        printf("\n");
        printf("El escrito original es: %s \n", copia);
        printf("===========================\n");
    }
    
    return 0;
}
