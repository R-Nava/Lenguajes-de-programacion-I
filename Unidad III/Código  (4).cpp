#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int a[30], n, j, i, aux;
	
	do{
		
		printf ("Cuantos nums: \n");
		scanf ("%d", &n);
		if (n<=0 || n>30){
			
			printf ("Rango 1-30 \n");
			
		}
		
	}while(n<=0 || n>30);
	
	printf ("ALM DE NUMS \n");
	printf ("======================= \n");
	
	for (i=0;i<n;i++){
		
		printf ("dame el num: \n");
		scanf ("%d", &a[i]);
		
	}
	
	//Metodo burbuja, ordenar los nums
	
	for (j=0;j<n;j++){
		
		for (i=0;i<n-1;i++){
			
			if (a[i]>a[i+1]){
				
				aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
				
			}
			
		}
		
	}
	
	//imprimir los numeros ordenados
	
	printf ("LOS NUMEROS ORDENADOS \n");
	printf ("====================== \n");
	
	for (i=0;i<n;i++){
		
		printf ("%d \t", a[i]);
		
	}
	
	return 0;
}
