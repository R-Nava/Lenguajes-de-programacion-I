#include <stdio.h>

long int Factorial(long int num);

int main()
{ long int num, r;
do{

printf("Dame el numero\n");
scanf("%ld", &num);
if(num<=0 || num>33)
{
	printf("Solo nums positivos mayores de 0 y menores de 34\n");
}
}while(num <=0 || num>33);
 r= Factorial(num);
 printf("Resultado=%ld\n", r);
return 0;
}
//FUNCIONES
long int Factorial(long int num){
	long int r;
	if(num==1){
	 r=1;
	 
	}else{
		r=num*Factorial(num-1);
	}
	
	return r;	
}
