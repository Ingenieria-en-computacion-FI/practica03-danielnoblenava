#include <stdio.h>
#include "pelicula.h"

int main()
{

	printf("Prueba del TAD Pelicula\n");

    /* TODO
       Crear una película
    */
    	Pelicula* p = NULL;
	p = crearPelicula("titanic", 1914, "normie");


    /* TODO
       Agregar algunos directores
    */

	agregarDirector(p, "mencho");
	agregarDirector(p, "frank");

    /* TODO
       Imprimir película
    */

	imprimir(p);


    	printf("\nCambiar genero\n");

    /* TODO
       Cambiar genero
    */

	cambiarGenero(p, "niggas");
    /* TODO
       Imprimir nuevamente
    */
	imprimir(p);

    /* TODO
       Liberar memoria
    */
	destruir(p);

    	return 0;
}
