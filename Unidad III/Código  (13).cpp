#include <stdio.h>
#include <math.h>

int main (){
	
	int tamano, x, y, i=0, j=0, DI=0, par=0, impar=0;
	float test, num; //Variables para validar
	
		do{ //validacion de entero
		
			printf ("Ingresa el tamaño: \n");
			scanf ("%f", &num);
			test = trunc (num);
			
			if ((num-test) != 0){
				
				printf ("Este numero debe ser entero \n");
				
			}else{
				
				tamano=num;	
				
			}
			
		}while((num-test) != 0); //validacion de entero
		
	int Matriz[tamano][tamano];
	
	//se pone primero y y luego x para que se rellene por renglones, de lo contrario sera por columnas
	
		for (x=0;x<tamano;x++){
			
			for (y=tamano-1;y>=0;y--){
				
				printf ("Ingresa la coordenada (%d, %d) \n", i, j);
				scanf ("%d", &Matriz[y][x]);
				
				if (x==y){
					
					DI=DI+Matriz[y][x];
					
				}
				if (Matriz[y][x] % 2 == 0 ){
					
					par++;
					
				}else{
					
					impar++;
					
				}
				
				j++;
			}
			i++;
			j=0;
		}
		
		printf ("La matriz generada es la siguiente: \n");
		printf ("\n");
		
		for (x=0;x<tamano;x++){
			
			for (y=tamano-1;y>=0;y--){
				
				printf (" %d \t", Matriz[y][x]);
				
			}
			
			printf ("\n");
			
		}
		printf ("\n");
		printf ("La suma de la digonal inversa es: %d \n", DI);
		printf ("La cantidad de numeros pares es: %d \n", par);
		printf ("La cantidad de numeros impares es: %d \n", impar);
		
	return 0;
}
