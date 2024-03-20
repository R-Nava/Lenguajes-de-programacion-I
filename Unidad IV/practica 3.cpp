#include <stdio.h>
#include <math.h>

void OrdenaN(int nums[30], int tam);
void ImprimirN(int nums[30], int tam);

int main(){
	
	int tam, i, j, digito, nums[30];
	float num, test;
			
	do{ //validacion de entero
		printf ("Ingresa el tamaño: \n");
		scanf ("%f", &num);
		test = trunc (num);
		if ((num-test) != 0){
			printf ("Este numero debe ser entero \n");
		}else{
			tam=num;	
		}
	}while((num-test) != 0 || tam>=30); //validacion de entero
	
	for (i=0;i<=tam;i++){
			
		do{ //validacion de entero
			printf ("Ingresa un numero: \n");
			scanf ("%f", &num);
			test = trunc (num);
			if ((num-test) != 0){
				printf ("Este numero debe ser entero \n");
			}else{
				digito=num;	
			}
		}while((num-test) != 0); //validacion de entero
		
		nums[i]=digito;
		
	}
	
	OrdenaN(nums,tam);
	
	ImprimirN(nums, tam);
	
	return 0;
}

void OrdenaN(int nums[30], int tam){
	
	int i, aux, j;
	
	for (j=0;j<tam-1;j++){
		
		for (i=0;i<tam-1;i++){
			
			if (nums[i]>nums[i+1]){
				
				aux=nums[i];
				nums[i]=nums[i+1];
				nums[i+1]=aux;
				
			}
			
		}
		
	}
}

void ImprimirN(int nums[30], int tam){
	
	int i;
	
	for (i=0;i<=tam;i++){
		
		printf ("%d \t", nums[i]);
		
	}
	
}
