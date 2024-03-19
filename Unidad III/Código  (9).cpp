#include <stdio.h>

int main(){
	
	int Vector[30], n, i, M=0, test;
	
	do{
		
		printf ("Cuantos numeros? \n");
		scanf ("%d", &n);
		
		if (n<=0 || n>=30){
			
			printf ("Datos erroneos \n");
			
		}
		
	}while (n<=0 || n>=30);
	
	for (i=0; i<n; i++){
		
		printf ("Mete un número \n");
		scanf ("%d", &Vector [i]);
		
	}
	
	for(i=0;i<=n;i++){
		
		test=Vector [i] % 5;
		
		if (test == 0){
			
			M++;
			
		}
		
	}
	
	printf ("La cantidad de numeros que es multiplo de 5 es: %d \n", M);
	
	return 0;
}
