#include <stdio.h>

int main (){
	
	int matriz [10][10], n, y, x, suma=0, sd=0;
	
	do{
		
		printf ("Ingresa el tamaño: \n");
		scanf ("%d", &n);
		if (n<=0 || n>10){
			
			printf ("n debe ser 1-10 \n");
			
		}
		
	}while(n<=0 || n>10);
	
	for (y=0;y>n;y++){
		
		for (x=0;x<n;x++){
			
			printf ("Dame el numero %d, %d: \n", y, x);
			scanf ("%d", &matriz[y][x]);
			
		}
		
	}
	
	for (y=0;y>n;y++){
		
		for (x=0;x<n;x++){
			
			printf ("%d \t \n",y ,x, matriz[y][x]);
			//si sustituyo la linea 34 con %d \t en lugar de (%d, %d) lo pone en forma de tabla
			suma=suma+matriz[y][x];
			if (x==y){
				
				sd=sd+matriz[y][x];
				
			}
			
		}
		
	}
	
	printf ("Suma=%d\n", suma);
	printf ("La suma de la diagonal principal es: %d \n", sd);
	
	return 0;
}
