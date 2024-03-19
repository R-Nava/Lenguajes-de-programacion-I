#include <stdio.h>
#include <math.h>

int main (){
	
	int tamano, i, valor, max=0, min=0;
	float num, test; //Validación de entero
	
	do{ //validacion de entero
		printf ("Cuantos numeros ingresaras: \n");
		scanf ("%f", &num);
		test = trunc (num);
		if ((num-test) != 0){
			printf ("Este numero debe ser entero \n");
		}else{
			tamano=num;	
		}
	}while((num-test) != 0); //validacion de entero
	
	int Vector[tamano];
	
	for (i=0;i<tamano;i++){
		
		do{ //validacion de entero
		
			printf ("Ingresa el numero: \n");
			scanf ("%f", &num);
			test = trunc (num);
			
			if ((num-test) != 0){
				
				printf ("Este numero debe ser entero \n");
				
			}else {
				
				valor=num;
				
			}
			
		}while((num-test) != 0); //validacion de entero
		
		Vector[i] = valor;
		
		min=valor;
		
		max=valor;
		
	}
	printf ("Los numeros ingresados son: \n");
	for (i=0;i<tamano;i++){
		
		if (Vector[i] < min){
			
			min=Vector[i];
			
		}
		
		if (Vector[i] > max){
			
			max=Vector[i];
			
		}
		
		printf ("%d \n", Vector[i]);
		
	}
	printf ("\n");
	printf ("El mayor es %d mientras que el menor es %d", max, min);
	
	return 0;
}
