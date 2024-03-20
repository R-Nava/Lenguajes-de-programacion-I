#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

int main (){
	int tamano, opc, x, y, i, j;
	float num, test;
	float matriz[i][j];
	do{
		system ("cls");
		do{ //validacion de entero
			printf ("Ingresa un tamano: \n");
			scanf ("%f", &num);
			test = trunc (num);
			if ((num-test) != 0){
				printf ("Este numero debe ser entero \n");
			}else{
				tamano=num;	
			}
		}while((num-test) != 0 || num>10 || num<0); //validacion de entero
		float MA[tamano][tamano], MB[tamano][tamano], MR[tamano][tamano], MR1[tamano][tamano]; //Declaración de matrices
		for (y=0;y<tamano;y++){
			for (x=0;x<tamano;x++){
				MA[y][x]=0;
			}
		}
		for (y=0;y<tamano;y++){
			for (x=0;x<tamano;x++){
				MB[y][x]=0;
			}
		}
		for (y=0;y<tamano;y++){
			for (x=0;x<tamano;x++){
				MR[y][x]=0;
			}
		}
		for (y=0;y<tamano;y++){
			for (x=0;x<tamano;x++){
				MR1[y][x]=0;
			}
		}
		system ("cls");
		do{
			printf ("\n");
			printf ("=================================\n");
			printf ("MENU \n");
			printf ("1.- Editar matriz A \n");
			printf ("2.- Editar matriz B \n");
			printf ("3.- Suma de matrices \n");
			printf ("4.- Resta de matrices \n");
			printf ("5.- Multiplicacion de matrices \n");
			printf ("6.- Cambiar tamaño \n");
			printf ("7.- Salir \n");
			printf ("=================================\n");
			printf ("\n");
			printf ("Matriz A: \n");
			for (y=0;y<tamano;y++){
				for (x=0;x<tamano;x++){
					printf ("%.2f \t", MA[y][x]);
				}
				printf ("\n");
			}
			printf ("\n");
			printf ("Matriz B: \n");
			for (y=0;y<tamano;y++){
				for (x=0;x<tamano;x++){
					printf ("%.2f \t", MB[y][x]);
				}
				printf ("\n");
			}
			printf ("\n");
			do{ //validacion de entero
				printf ("Ingresa un opcion: \n");
				scanf ("%f", &num);
				test = trunc (num);
				if ((num-test) != 0){
					printf ("Este numero debe ser entero \n");
				}else{
					opc=num;	
				}
			}while((num-test) != 0 || num>7 || num<1); //validacion de entero
			switch (opc){
				case 1:
					system ("cls");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							printf ("Ingresa un numero en las coordenadas (%d, %d): \n", y, x);
							scanf ("%f", &MA[y][x]);
						}
					}
					system ("cls");
					break;
				case 2:
					system ("cls");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							printf ("Ingresa un numero en las coordenadas (%d, %d): \n", y, x);
							scanf ("%f", &MB[y][x]);	
						}
					}
					system ("cls");
					break;
				case 3:
					system ("cls");
					printf ("\n");
					printf ("Matriz A: \n");
					for (y=0;y<tamano;y++){	
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MA[y][x]);
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("Matriz B: \n");
					for (y=0;y<tamano;y++){	
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MB[y][x]);	
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("La matriz resultante es: \n");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							MR[y][x]=MA[y][x]+MB[y][x];
							printf ("%.2f \t", MR[y][x]);	
						}
						printf ("\n");
					}
					printf ("\n");
					system ("pause");
					system ("cls");
					break;
				case 4:
					system ("cls");
					printf ("\n");
					printf ("Matriz A: \n");
					for (y=0;y<tamano;y++){	
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MA[y][x]);	
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("Matriz B: \n");
					for (y=0;y<tamano;y++){	
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MB[y][x]);
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("La matriz resultante es: \n");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							MR[y][x]=MA[y][x]-MB[y][x];
							printf ("%.2f \t", MR[y][x]);
						}
						printf ("\n");
					}
					printf ("\n");
					system ("pause");
					system ("cls");
					break;
				case 5:
					system ("cls");
					printf ("\n");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							MR1[y][x]=0;
						}
					}
					printf ("Matriz A: \n");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MA[y][x]);		
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("Matriz B: \n");
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MB[y][x]);		
						}
						printf ("\n");
					}
					printf ("\n");
					printf ("La matriz resultante es: \n");
					i=0;
					x=0;
					while (i<tamano){
						for (y=0;y<tamano;y++){
							for (j=0;j<tamano;j++){
								MR[y][j]=MA[y][x]*MB[i][j];
								MR1[y][j]=MR1[y][j]+MR[y][j];	
							}
						}	
						i++;
						x++;
					}
					for (y=0;y<tamano;y++){
						for (x=0;x<tamano;x++){
							printf ("%.2f \t", MR1[y][x]);	
						}
						printf ("\n");
					}
					printf ("\n");
					system ("pause");
					system ("cls");
					break;
				case 6:
					system ("cls");
					break;
				case 7:
					system ("cls");
					printf ("El programa a terminado: ");
					break;
			}
		}while (opc!=6 && opc !=7);
	}while(opc!=7);
	return 0;
}
