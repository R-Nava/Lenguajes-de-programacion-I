#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int arreglo[30], n, i, pares=0, impares=0;
	
	do{
		
		printf ("Cuantos numeros? \n");
		scanf ("%d", &n);
		
		if (n<=0 || n>30){
			printf("datos erroneos");
		}
		
	}while (n<=0 || n>30);
	
	for(i=0;i<=n;i++){
		
		printf ("introduce el numero \n");
		scanf ("%d", arreglo [i]);
		
	}
	
	printf ("Los numeros del arreglo son: \n");
	
	for(i=0;i<=n;i++){
		
		printf ("-> %d \n", arreglo[i]);
		
	}
	
	for(i=0;i<=n;i++){
		
		if (arreglo[i] % 2 = 0){
			
			pares++;
			
		}else{
			
			impares++;
			
		}
		
	}
	
	printf ("Los pares son: %d", pares);
	printf ("Los impares son: %d", impares);
	
	return 0;
}
