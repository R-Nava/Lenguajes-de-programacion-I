#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
	char escrito[10][10],copia[20];
	int tam,y,x,n;
	do
	{
		printf ("Ingrese la cantidad de escritos: \n");
		scanf ("%d",&n);
	} while (n<=0 or n>10);
	for (y=0; y<n; y++)
	{
		printf ("Dame el escrito: \n");
		fflush (stdin);
		gets (escrito[y]);
	}
	for (y=0; y<n; y++)
	{
		tam=strlen(escrito[y]); //tamano del escrito
		strcpy(copia,escrito[y]); //copia=escrito;
		for (x=0; x<tam; x++)
		{	
			// %c un solo caracter 
			if (isalpha(escrito[y][x]))
			//verificar si es letra
			{
				printf ("%c es letra. \n",escrito[y][x]);
			}
			else if (isdigit(escrito[y][x])) 
			//si se cumple el de arriba, los demas no se cumplen
			{
				printf ("%c es digito. \n",escrito[y][x]);
			}
			else
			{
				printf ("%c es otro. \n",escrito[y][x]);
			}
			escrito[y][x]=toupper(escrito[y][x]);
			//convertir a mayusculas (toupper)
			escrito[y][x]=tolower(escrito[y][x]);
			//convertir a minusculas (tolower)
		}
		printf ("\n");
		printf ("El escrito original es: %s \n",copia);
		printf ("===========================\n");
	}
	return 0;
}
