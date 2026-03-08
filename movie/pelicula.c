#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"

/* TODO
   Crear función auxiliar para copiar cadenas
   usando malloc + strcpy
*/
char* copiarCadena(const char* texto)
{
    /* TODO */
	if(!texto) return NULL;
	char* copia = malloc(strlen(texto)+1);
	if(copia) strcpy(copia, texto);
	return copia;
}


/* Crear película */
Pelicula* crearPelicula(const char* titulo, short anio, const char* genero)
{
    /* TODO
       1 Reservar memoria para Pelicula
       2 Copiar titulo
       3 Copiar genero
       4 Inicializar anio
       5 Inicializar contador de directores en 0
       6 Regresar la película
    */
	Pelicula *nueva = (Pelicula*)malloc(sizeof(Pelicula));
	nueva->nombre = copiarCadena(titulo);
	nueva->genero = copiarCadena(genero);
	nueva->year = anio;
	nueva->numDirectores = 0;
	return nueva;
}


/* Imprimir película */
void imprimir(Pelicula* p)
{
    /* TODO
       Imprimir:

       Titulo
       Año
       Genero
       Lista de directores
    */
	printf("\nTitulo de la pelicula %s", p->nombre);
	printf("\nA�o de la pelicula %s", p->year);
	printf("\nGenero de la pelicula %s", p->genero);
	if(p->numDirectores > 0){
		for(int i = 0; i < p->numDirectores; i++){
			printf("\nDirector %d = %s", i, p->directores[i]);
		}
	} else {
		printf("\nAun no hay directores :(");	
	}
}


/* Cambiar género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero)
{
    /* TODO
       1 Liberar el genero anterior
       2 Copiar nuevoGenero
    */
	free(p->genero);
	p->genero = NULL;
	p->genero = copiarCadena(nuevoGenero);
}


/* Agregar director */
void agregarDirector(Pelicula* p, const char* director)
{
    /* TODO
       1 Verificar que no exceda MAX_DIRECTORES
       2 Copiar el nombre del director
       3 Guardarlo en el arreglo
       4 Incrementar contador
    */
	if(strlen(director) > MAX_DIRECTORES){
		printf("\nMuchos caracteres nigga :(");
		return;
	}
	int index = p->numDirectores;
	p->directores[index] = copiarCadena(director);
	p->numDirectores++;
}


/* Liberar memoria */
void destruir(Pelicula* p)
{
    /* TODO
       1 Liberar titulo
       2 Liberar genero
       3 Liberar cada director
       4 Liberar la estructura
    */
	free(p->nombre);
	free(p->genero);
	for(int i = 0; i <= p->numDirectores; i++){
		free(p->directores[i]);
	}
	free(p);
}
