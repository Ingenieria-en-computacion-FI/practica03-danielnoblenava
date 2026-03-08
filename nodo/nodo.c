#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

/* TODO
   Definir la estructura Nodo.
   Debe contener un entero llamado valor.
*/
struct Nodo
{
    /* TODO */
	int valor;
};


/* Crear un nodo dinámicamente */
Nodo* crearNodo(int valor)
{
    /* TODO
       1 Reservar memoria con malloc
       2 Verificar que la memoria se haya asignado
       3 Inicializar el valor del nodo
       4 Regresar el nodo
    */
	Nodo* nuevo = malloc(sizeof(Nodo));
	if(nuevo == NULL){
		printf("\nFallo en la asignacion de memoria de nodo");
		exit(-1);
	} 
	nuevo->valor = valor;
	return nuevo;
}


/* Obtener el valor almacenado */
int obtenerValor(Nodo* nodo)
{
    /* TODO
       1 Verificar que el nodo no sea NULL
       2 Regresar el valor almacenado
    */
	if(nodo == NULL){
		printf("\nSe recibio un nodo null");
		exit(-1);
	}
	return nodo->valor;
}


/* Modificar el valor almacenado */
void asignarValor(Nodo* nodo, int valor)
{
    /* TODO
       1 Verificar que el nodo no sea NULL
       2 Asignar el nuevo valor
    */
	if(nodo == NULL){
		printf("\nSe recibio un nodo null");
		return;
	}
	nodo->valor = valor;
}


/* Liberar memoria del nodo */
void destruirNodo(Nodo* nodo)
{
    /* TODO
       Liberar la memoria usando free
    */
	free(nodo);
}
