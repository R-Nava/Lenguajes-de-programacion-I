#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Recordatorio: Hacer función de validación de enteros

char menu();
int suma(int num);
float raiz(int num);

int main (){
	
	char opc;
	int resultado, num;
	float resultado2;
	
	do{
		
		system ("cls");
		
		opc=menu();
		
		switch (opc){
			
			case 'A':
				
				printf ("Ingresa un numero: \n");
				scanf ("%d", &num);
				
				resultado = suma(num);
				
				printf ("El resultado es %d \n", resultado);
				
				system ("pause");
				break;
			case 'B':
				
				printf ("Ingresa un numero: \n");
				scanf ("%d", &num);
				
				resultado2 = raiz(num);
				
				printf ("El resultado es %.2f \n", resultado2);
				
				system ("pause");
				break;
			case 'C':
				printf ("");
				break;
		}
		
	}while (opc!='C');
	
	return 0;
}

char menu(){
	
	char opc;
	
	printf ("MENU:\n");
	printf ("A.- Sumas\n");
	printf ("B.- Raices\n");
	printf ("C.- Salir\n");
	printf ("Utilizar mayusculas\n");
	scanf ("%c", &opc);
	
	return opc;
}

int suma(int num){

	int resultado;
	
	if (num==0 || num==1){
		
		resultado=num;
		
	}else{
		
		resultado = num + suma(num-2);
		
	}
	
	return resultado;
}

float raiz (int num){
	
	float resultado2;
	
	if (num==2){
		
		resultado2=sqrt(2);
		
	}else{
		
		resultado2 = sqrt(num) + raiz(num-1);
		
	}
	
	return resultado2;
}






















