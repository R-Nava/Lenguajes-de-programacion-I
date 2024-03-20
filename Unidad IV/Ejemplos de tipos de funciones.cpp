#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Prototipo de la función
//Tipo1 --> No retorna y no envuia parámetros
//Tipo2 --> No retorna y si envuia parámetros

void pantalla (); //Aqui se define variables globales
int menu ();
void FGrl (int a, int b, int c);
void sumaM (int ma[10][10], int mb[10][10], int n);

int main(){ //Retorna un valor, no envian parametros, es una función del tipo 3
	
	int opc, a, b, c;, ma[10][10], mb[10][10], n, y, x;
	
	pantalla (); //Así se manda llamar la función
	
	do{
		
		system ("pause");
		system ("cls");
		opc=menu();
		
		switch (opc){
	
			case 1:
				printf ("Dame a: \n");
				scanf ("%d", &a);
				printf ("Dame b: \n");
				scanf ("%d", &b);
				printf ("Dame c: \n");
				scanf ("%d", &c);
				FGrl (a, b, c);
				break;
			
			case 2:
				printf ("Dame el tam de las matrices: \n");
				scanf ("%d", &n);
				
				printf ("Matriz A: \n");
				for (y=0;y<n;y++){
					
					for (x=0;x<n;x++){
						
						printf ("Dame el num %d, %d: \n", y, x)
						scanf ("%d", &ma[y][x]);
						
					}
					
				}
				
				printf ("Matriz B: \n");
				for (y=0;y<n;y++){
					
					for (x=0;x<n;x++){
						
						printf ("Dame el num %d, %d: \n", y, x)
						scanf ("%d", &mb[y][x]);
						
					}
					
				}
				
				sumaM(ma, mb, n);
				
				break;
				
			case 3:
				break;
			
			default:
				break;
			
		}
		
	}while (opc!=3);
	
	return 0;
}

void pantalla (){
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("====================================================================\n");
	printf ("==                                                                ==\n");
	printf ("==                                                                ==\n");
	printf ("==         Ejemplo Tipos                                          ==\n");
	printf ("==                        De                                      ==\n");
	printf ("==                               Funciones                        ==\n");
	printf ("==                                                                ==\n");
	printf ("====================================================================\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
}

int menu (){
	
	int opc;
	
	printf ("MENU\n");
	printf ("1. Formula general\n");
	printf ("2. Suma de matrices\n");
	printf ("3. Salir\n");
	printf ("Dame la opción: \n");
	scanf ("%d", &opc);
	
	return opc;
}

void FGrl (int a, int b, int c){
	
	float x1, x2;
	
	x1= -b + sqrt (b * b - 4 * a * c) / (2 * a);
	x2= -b - sqrt (b * b - 4 * a * c) / (2 * a);
	
	printf ("Resultado x1 = %f \n", x1);
	printf ("Resultado x2 = %f \n", x2);
	
}

void sumaM (int ma[10][10], int mb[10][10], int n){
	
	int x, y, mr[10][10];
	
	for (y=0;y<n;y++){
		
		for (x=0;x<n;x++){
			
			mr[y][x]=ma[y][x]+mb[y][x]_;
			
		}
		
	}
	
	printf ("La matriz resultante es: \n");
	
	for (y=0;y<n;y++){
		
		for (x=0;x<n;x++){
			
			printf ("%d /t", mr[y][x]);
			
		}
		printf ("\n");
	}
	
	
}


