#include <stdio.h>
#include "pelicula.h"

int main(){
	printf("Prueba del TAD de la pelicula\n");
	
	/* TODO 
	   crear una pelicula
	*/
	Pelicula *p;
	p = crearPelicula("chicken little", "terror");

	/* TODO
	   agregar algunos directores
	*/
	agregarDirector(p, "pepe");
	agregarDirector(p, "pluto");

	imprimir(p);
	printf("\nCambiar genero\n");

	/* TODO
	   cambiar genero de la pelicula	
	*/
	cambiarGenero(p, "drama");
	
	/* TODO
	   imprimir nuevamente
	*/

	imprimir(p);
	
	/* TODO
	   liberar memoria
	*/
	destruir(p);
}
