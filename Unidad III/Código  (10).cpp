#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){	
	char escrito[30];
	int tam,i,cont=0;
	printf ("Ingrese el escrito: \n");
	fflush (stdin);
	gets (escrito);
	tam = strlen (escrito); 
	for (i=0; i<tam; i++){
		if (escrito[i]!='a' and escrito[i]!='e' and escrito[i]!='i' and escrito[i]!='o' and escrito[i]!='u'){
		cont++;
		}
	}
	printf ("%s Tiene %d consonantes: \n",escrito,cont);
	return 0;
}
