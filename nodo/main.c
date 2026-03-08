#include <stdio.h>
#include "nodo.h"

int main()
{
	printf("Prueba del TAD Nodo\n");

    /* TODO
       1 Crear un nodo con valor 10
    */
	Nodo* n = NULL;
	n = crearNodo(10);

    /* TODO
       2 Mostrar el valor del nodo usando obtenerValor
    */
	int valor = obtenerValor(n);
	printf("\nValor del nodo = %d", valor);

    /* TODO
       3 Cambiar el valor a 25 usando asignarValor
    */
	asignarValor(n, 25);

    /* TODO
       4 Mostrar nuevamente el valor
    */

	valor = obtenerValor(n);
	printf("\nValor del nodo = %d", valor);
	
	printf("\n");
    /* TODO
       5 Liberar el nodo con destruirNodo
    */
	destruirNodo(n);

	return 0;
}
