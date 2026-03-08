#include "pelicula.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_DIRECTORES 10

struct Pelicula{
	char *titulo;
	char *genero;
	int numDirectores;
	char *directores[10];
};

char* copiarCadena(const char* origen){
	if(origen == NULL) return NULL;
	char *destino = malloc(strlen(origen)+1);
	if(destino){
		strcpy(destino, origen);
	}
	return destino;
}

Pelicula* crearPelicula(const char* titulo, const char* genero){
	Pelicula *p = malloc(sizeof(Pelicula));
	if(!p) return NULL;
	
	p->titulo = copiarCadena(titulo);
	p->genero = copiarCadena(genero);
	p->numDirectores = 0;

	for(int i = 0; i < MAX_DIRECTORES; i++){
		p->directores[i] = NULL;
	}
	return p;
}

void cambiarGenero(Pelicula *p, const char *nuevoGenero){
	if(!p) return;
	free(p->genero);
	p->genero = copiarCadena(nuevoGenero);
}

void agregarDirector(Pelicula *p, const char *nombreDirector){
	if(p && p->numDirectores < MAX_DIRECTORES){
		p->directores[p->numDirectores] = copiarCadena(nombreDirector);
		p->numDirectores++;
	}else{
		printf("Error: Ya no hay espacio para mas directores");
		return;
	}
	
}

void imprimir(Pelicula *p){
	if (!p) return;
	printf("Pelicula: %s [%s]\n", p->titulo, p->genero);
	printf("\nDirectores: ");
	for(int i = 0; i < p->numDirectores; i++){
		printf("%s%s", p->directores[i], (i<p->numDirectores - 1) ? ", ": "");
	}
	printf("\n");
}

void destruir(Pelicula *p){
	if(!p) return;
	
	free(p->titulo);
	free(p->genero);
	for(int i = 0; i < p->numDirectores; i++){
		free(p->directores[i]);
	}
	free(p);
}
