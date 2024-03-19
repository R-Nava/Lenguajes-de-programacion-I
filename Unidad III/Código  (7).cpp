#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
	
	float test, num;
	int palabras, tam, x, y, conta=0;
	char matriz [10][20];
	
	do{ //validacion de entero
		printf ("Ingresa cuantas palabras: \n");
		scanf ("%f", &num);
		test = trunc (num);
		if ((num-test) != 0){
			printf ("Este numero debe ser entero \n");
		}else{
			palabras=num;	
		}
		if (num>10){
			printf ("No puede ingresar más de 10 palabras \n");
		}
	}while((num-test) != 0 || num>10); //validacion de entero
	
	for (y=0;y<palabras;y++){
		
		printf ("Dame el escrito %d: \n", y);
		fflush (stdin);
		gets(matriz[y]);
		
	}
	
	for (y=0;y<palabras;y++){
	
		tam=strlen(matriz[y]);
		
		for (x=0;x<tam;x++){
			
			if ((matriz[y][x]>='a' && matriz[y][x]<='z') || (matriz[y][x]>='A' && matriz[y][x]<='Z')){
				
				if (matriz[y][x]!='a' && matriz[y][x]!='A'
				 && matriz[y][x]!='e' && matriz[y][x]!='E'
				 && matriz[y][x]!='i' && matriz[y][x]!='I'
				 && matriz[y][x]!='o' && matriz[y][x]!='O'
				 && matriz[y][x]!='u' && matriz[y][x]!='U'){
				 	
				 	conta++;
				 	
				 }
				
			}
			
		}
	
	}
	
	printf ("La cantidad de consonantes es: %d \n", conta);
	
	return 0;
}
