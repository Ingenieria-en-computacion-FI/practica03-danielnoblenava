#include <stdio.h>
#include "fraccion.h"

int main()
{

	printf("Prueba del TAD Fraccion\n");

    /* TODO
       1 Crear dos fracciones
       ejemplo: 1/2 y 3/4
    */
	Fraccion* f1 = NULL;
	Fraccion* f2 = NULL;

	f1 = crearFraccion(1, 2);
	f2 = crearFraccion(3, 4);
	
    	printf("\nFraccion 1: ");
    /* TODO imprimir */
	imprimir(f1);
	
    	printf("\nFraccion 2: ");
    /* TODO imprimir */
	imprimir(f2);

    	printf("\nSuma de fracciones:\n");

    /* TODO
       2 Sumar fracciones
    */
    	Fraccion* resultado = NULL;
	resultado = sumar(f1, f2);

    /* TODO
       3 Imprimir resultado
    */
	imprimir(resultado);

	printf("\n");
    /* TODO
       4 Liberar memoria
    */
	
	destruir(f1);
	destruir(f2);
	destruir(resultado);

    	return 0;
}
