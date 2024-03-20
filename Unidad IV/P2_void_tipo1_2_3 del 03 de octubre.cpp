#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void pantalla();
//tipo 1 -> no retorna y no se envian parametros
int menu();
//tipo 3 -> si retorna y no se envian parametros
void formulageneral (int a,int b,int c);
//tipo 2 -> no retorna y si envian parametros
void sumam (int ma[10][10],int mb[10][10],int n);
//tipo 2 -> suma matrices
void  imprimirm (int matriz[10][10],int n);
//tipo 2 imprimir matriz
int contadorA (char escrito[20],int tam);
//tipo 4 si retorna y si envia parametros
int sumaA (char palabra[20],int tam);
//tipo 4 buscar letras

int contador (char escritoN[20], int tamN); //<-------------- La que encargo la maestra

int main () //retorna valor, no envia parametros (tipo 3)
{	
	//tipo 1
	int opc,a,b,c,ma[10][10],mb[10][10],n,x,y;	
	pantalla();	//manda llamar la funcion pantalla
	char escrito[20], escritoN[20];
	int tam, cont=0, tamN;
	do
	//tipo 3
	{
		system ("pause");	
		system("cls");	//limpiar pantalla
		opc=menu();
		switch (opc)
		{
			case 1: 
			printf ("Dame a: \n");
			scanf ("%d",&a);
			printf ("Dame b: \n");
			scanf ("%d",&b);
			printf ("Dame c: \n");
			scanf ("%d",&c);
			formulageneral (a,b,c);
			break;
			case 2:
				printf ("Dame el tam de la matriz: \n");
				scanf ("%d",&n);
				printf ("MATRIZ A: \n");
				for (y=0; y<n; y++)
				{
					for (x=0; x<n; x++)
					{
						printf ("Dame el numero: %d %d \n",y,x);
						scanf ("%d",&ma[y][x]);
					}
				}
				printf ("MATRIZ B: \n");
				for (y=0; y<n; y++)
				{
					for (x=0; x<n; x++)
					{
						printf ("Dame el numero: %d %d \n",y,x);
						scanf ("%d",&mb[y][x]);
					}
				}
				sumam(ma,mb,n);
			break;
			case 3:
				printf ("Dame el escrito: \n");
				fflush (stdin);
				gets (escrito);
				tam=strlen (escrito);
				//int contadorA(char escrito[20],int tam);
				cont=contadorA (escrito,tam);
				printf ("La cantidad de 'A' son: %d \n",cont);
			break;
			case 4:
				printf ("Dame el escrito: \n");
				fflush (stdin);
				gets (escritoN);
				tamN=strlen (escritoN);
				//int contadorA(char escrito[20],int tam);
				cont=contador (escritoN, tamN);
				printf ("La cantidad de letras son: %d \n",cont);
				
			break;
			case 5:
				printf ("\n");
			default:
				printf ("\n");
			break;
		}
		system ("pause");
	} while (opc!=5);
	return 0;
}

//<-------------------------------------- Lo que encargo la maestra
int contador(char escritoN[20],int tamN)
{
	int y,cont=0;
	char letra;
	
	printf ("Ingrese una letra: \n");
	scanf ("%c", &letra);
	
	for (y=0; y<tamN; y++)
	{
		if (escritoN[y]==letra)
		{
			cont++;
		}
	}
	return cont;
}

//tipo 4
int contadorA(char escrito[20],int tam)
{
	int y,cont=0;
	
	for (y=0; y<tam; y++)
	{
		if (escrito[y]=='a' or escrito[y]=='A')
		{
			cont++;
		}
	}
	return cont;
}
//tipo 2
void formulageneral (int a, int b, int c)
{
	float x1,x2;
	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	printf ("Resultado x1= %f \n",x1);
	printf ("Resultado x2= %f \n",x2);
}
//tipo 2
int menu()
{
	int opc;
	printf ("M	E	N	U		\n");
	printf ("1. Formula General  \n");
	printf ("2. Suma de Matrices \n");
	printf ("3. Contar As \n");
	printf ("4. Contar de cualquier letra \n");
	printf ("5. Salir \n");
	printf ("Dame la opcion: \n");
	scanf ("%d",&opc);
	return opc;
}

//tipo 2 suma matrices
void sumam (int ma[10][10],int mb[10][10],int n)
{
	int y, x, mr[10][10];
	//suma matrices
	for (y=0; y<n; y++)
	{
		for (x=0; x<n; x++)
		{
			mr[y][x]=ma[y][x]+mb[y][x];
		}
	}
	printf ("Matriz Resultante: \n");
	for (y=0; y<n; y++)
	{			
		for (x=0; x<n; x++)
		{
			printf ("%d \t ",mr[y][x]);
		}
		printf ("\n");
	}
	//mandar a llamar a las matrices
	printf ("Matriz A: \n");
	imprimirm(ma,n);
	printf ("Matriz B: \n");
	imprimirm(mb,n);
	printf ("Matriz Resultante: \n");
	imprimirm(mr,n);
}
//tipo 2 imprimir matrices
void  imprimirm (int matriz[10][10],int n)
{
	int y,x;
	for (y=0; y<n; y++)
	{			
		for (x=0; x<n; x++)
		{
			printf ("%d \t",matriz[y][x]);
		}
		printf ("\n");
	}
}
//tipo 1
void pantalla()
{
	printf ("\n");
	printf ("\t \t \t========================= \n");
	printf ("\t \t \t=                       = \n");
	printf ("\t \t \t=                       = \n");
	printf ("\t \t \t=       EJEMPLO         = \n");
	printf ("\t \t \t=         DE            = \n");
	printf ("\t \t \t=      FUNCIONES        = \n");
	printf ("\t \t \t=                       = \n");
	printf ("\t \t \t=                       = \n");
	printf ("\t \t \t========================= \n");
}
