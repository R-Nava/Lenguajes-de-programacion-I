#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char escrito [10][20];
	int conta = 0, tam, y, x, n;
	
	do{
		
		printf ("Cuantos escritos: \n");
		scanf ("%d", &n);
		
		if (n<=0 || n>10){
			
			printf ("Fuera de rango \n");
			
		}
		
	}while (n<=0 || n>10); 
	
	for (y=0;y<n;y++){
		
		printf ("Dame el escrito %d: \n", y);
		fflush (stdin);
		gets(escrito[y]);
		
	}
	
	for (y=0;y<n;y++){
		
		tam=strlen(escrito[y]); //esa funcion es de la libreria string y es para contar caracteres
		
		for (x=0;x<tam;x++){
			
			if (escrito[y][x]=='a' || escrito[y][x]=='A'){
				
				conta++;
				
			}
			
		}
		
	}
	
	printf ("%d", conta);
	
	return 0;
}
