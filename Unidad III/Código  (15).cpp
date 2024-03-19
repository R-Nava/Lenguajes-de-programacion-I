#include <stdio.h>
#include <math.h>

int main(){
	
	float test, num;
	int filas, columnas, i, j, hold1, hold2, esquina=0;
	
	float suma=0;
	
	do{ //validacion de entero
		printf ("Ingresa las filas: \n");
		scanf ("%f", &num);
		test = trunc (num);
		if ((num-test) != 0){
			printf ("Este numero debe ser entero \n");
		}else{
			filas=num;	
		}
	}while((num-test) != 0); //validacion de entero
	
	do{ //validacion de entero
		printf ("Ingresa las columnas: \n");
		scanf ("%f", &num);
		test = trunc (num);
		if ((num-test) != 0){
			printf ("Este numero debe ser entero \n");
		}else{
			columnas=num;	
		}
	}while((num-test) != 0); //validacion de entero
	
	float matriz[columnas][filas];
	
	for (i=0;i<columnas;i++){
		
		for (j=0;j<filas;j++){
			
			printf ("Ingresa el numero de la coordenada (%d, %d): \n", i, j);
			scanf ("%f", & matriz[i][j]);
			
		}
		
	}
	
	hold1=columnas+1;
	hold2=filas+1;
	
	float matrizR[hold1][hold2];
	
	for (i=0;i<columnas;i++){
		
		for (j=0;j<filas;j++){
			
			matrizR[i][j]=matriz[i][j];
			suma=suma+matriz[i][j];
		}
		
		matrizR [i][j]=suma;
		esquina=esquina+suma;
		suma=0;
		
	}
	
	for (j=0;j<filas;j++){
		
		for (i=0;i<columnas;i++){
			
			matrizR[i][j]=matriz[i][j];
			suma=suma+matriz[i][j];
		}
		
		matrizR [i][j]=suma;
		esquina=esquina+suma;
		suma=0;
		
	}

	for (i=0;i<hold1;i++){
		
		for (j=0;j<hold2;j++){
			
			printf ("%f \t", matrizR[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
	printf ("\n");
	printf ("El resultado de sumar las sumas es: %d", esquina);
	
	return 0;
}
