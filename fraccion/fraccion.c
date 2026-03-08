#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

/* TODO
   Definir la estructura Fraccion
   Debe contener:
   - numerador
   - denominador
*/
struct Fraccion
{
    /* TODO */
	int numerador;
	int denominador;
};


/* TODO
   Crear una función auxiliar para calcular
   el máximo común divisor (MCD)
*/
int mcd(int a, int b)
{
    /* TODO */

	if(a == 0)
		return a;
	if(b == 0)
		return b;
	if (a == b)
		return a;
	if (a > b)
		return mcd(a-b, b);
	return mcd(a, b-a);
}


/* Crear fracción */
Fraccion* crearFraccion(int num, int den)
{
    /* TODO
       1 Verificar que el denominador no sea 0
       2 Reservar memoria con malloc
       3 Asignar numerador y denominador
       4 Simplificar la fracción
       5 Regresar la fracción
    */
	if(den == 0){
		fprintf(stderr, "\nDenominador es cero :(\n");
		exit(EXIT_FAILURE);
	}

	Fraccion* nueva = malloc(sizeof(Fraccion));

	if(nueva == NULL){
		fprintf(stderr, "\nError: fallo en la asignacion de memoria en crearFraccion\n");
		exit(EXIT_FAILURE);		
	}

	int divisor = mcd(num, den);
	num /= divisor;
	den /= divisor;

	nueva->numerador = num;
	nueva->denominador = den;
	return nueva;
}


/* Simplificar fracción */
void simplificar(Fraccion* f)
{
    /* TODO
       1 Calcular el MCD
       2 Dividir numerador y denominador entre el MCD
    */
	int divisor = mcd(f->numerador, f->denominador);
	f->numerador /= divisor;
	f->denominador /= divisor;
}


/* Sumar fracciones */
Fraccion* sumar(Fraccion* a, Fraccion* b)
{
    /* TODO
       1 Calcular numerador resultante

          a/b + c/d =
          (a*d + b*c) / (b*d)

       2 Crear nueva fracción
       3 Simplificar
       4 Regresar resultado
    */

	int num = (a->numerador*b->denominador)+(a->denominador*b->numerador);
	int den = a->denominador*b->denominador;
	
	Fraccion *result = crearFraccion(num, den);
	simplificar(result);
	return result;
}


/* Imprimir fracción */
void imprimir(Fraccion* f)
{
    /* TODO
       Imprimir en formato:

       numerador/denominador
    */
	printf("\n%d/%d", f->numerador, f->denominador);
}


/* Liberar memoria */
void destruir(Fraccion* f)
{
    /* TODO
       Liberar memoria con free
    */
	free(f);
}
