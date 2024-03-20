#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char escrito[30];
    int tam, i, cont = 0;

    printf("Ingrese el escrito: \n");
    fflush(stdin);
    gets(escrito);

    tam = strlen(escrito);

    for (i = 0; i < tam; i++) {
        if (escrito[i] != 'a' && escrito[i] != 'e' && escrito[i] != 'i' && escrito[i] != 'o' && escrito[i] != 'u' &&
            escrito[i] != 'A' && escrito[i] != 'E' && escrito[i] != 'I' && escrito[i] != 'O' && escrito[i] != 'U') {
            cont++;
        }
    }

    printf("%s Tiene %d consonantes: \n", escrito, cont);

    return 0;
}
