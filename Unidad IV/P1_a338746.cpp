#include <stdio.h>
#include <math.h>

int main (){
	
	float num, r, potencia;
	
	printf ("Dame el num \n");
	scanf ("%f", &num);
	
	r=sqrt (num);
	
	printf ("La raíz cuadrada es %.2f \n", r);
	
	printf ("Dame la potencia \n");
	scanf ("%f", &potencia);
	
	r=pow(num, potencia);
	
	printf ("La raíz cuadrada es %.2f \n", r);
	
	r=cos(num);
	
	printf ("cos num = %.2f \n", r);
	
	//AQUI EMPIEZA LA TAREA
	
	r=sin(num);
	
	printf ("sin num = %.2f \n", r);
	
	r=tan(num);
	
	printf ("tan num = %.2f \n", r);
	
	r=tanh(num);
	
	printf ("tanh num = %.2f \n", r);
	
	r=sinh(num);
	
	printf ("sinh num = %.2f \n", r);
	
	r=cosh(num);
	
	printf ("cosh num = %.2f \n", r);
	
	return 0;
}
