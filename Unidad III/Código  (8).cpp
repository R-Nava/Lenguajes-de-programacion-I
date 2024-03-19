#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char nombres[20][20], aux[20];
	int n, i, j;
	
	
	do{
		
		printf("Cuantos nombres:\n");
		scanf("%d", &n);
		if(n<=0 || n>30)
		{
			printf("Rango 1- 30\n");
		}
	}while (n<=0 || n>30);
	//Almacenar los nums en el arreglo
	printf("ALM DE NUMS \n"); 
	printf("================ \n"); 
	for(i=0;i<n;i++)
	{
		printf("Dame el nombre: \n"); 
		fflush(stdin);
		gets(nombres[i]);
	}
	 //Metodo
	 for(j=0;j<n-1;j++)
	 {
	 	for(i=0;i<n-1;i++)
		 {
	 		if(strcmp(nombres[i],nombres[i+1]) < 0)
			 {
	 			strcpy(aux,nombres[i]);
	 			strcpy(nombres[i],nombres[i+1]);
	 			strcpy(nombres[i+1],aux);
			 }
		 }
	 }
	// Imprimir numeros ord.
	printf("LOS NOMBRES ORDENADOS\n");
	printf("_____________________\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n", nombres[i]);
		printf("_____________________\n");	
	}
	
	
	
	
	
	
	
	
	/////////////////
	return 0;
}
