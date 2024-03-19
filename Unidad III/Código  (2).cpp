#include <stdio.h>
#include <stdlib.h> //arreglos
#include <string.h> //cadenas
//contabilizar vocales en el escrito
int main ()
{	
	char escrito[30];
	int tam,i,cont=0;
	printf ("Ingrese el escrito: \n");
	fflush (stdin);
	gets (escrito);
	tam = strlen (escrito); //cuenta los caracteres de la palabra
	//devuelve el tamano (longitud) de la cadena
	//hola  -> tam=4 por las 4 letras
	for (i=0; i<tam; i++)
	{
		if (escrito[i]=='a' or escrito[i]=='e' or escrito[i]=='i' or escrito[i]=='o' or escrito[i]=='u')
		{
		cont++;
		}
	}
	printf ("%s Tiene %d vocales minusculas: \n",escrito,cont);
	
	return 0;
}
