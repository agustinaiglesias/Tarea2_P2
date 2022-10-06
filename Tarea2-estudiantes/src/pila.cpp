/* 5463192 */ // sustituiir con los 7 dígitos de la cédula

#include "../include/pila.h"
#include "../include/cadena.h"
#include "../include/producto.h"

struct _rep_pila {
  TCadena pila;
  nat cantidad;
};

/*
  Devuelve una TPila vacía (sin elementos).
  El tiempo de ejecución debe ser O(1).
 */
TPila crearPila() { return NULL; }

/*
  Libera la memoria asignada a 'p' si la pila no contiene elementos.
  El tiempo de ejecución debe ser O(n), siendo 'n' la cantidad de elementos de
  'p'.
 */
void liberarPila(TPila p) {}

/*
  Devuelve la cantidad de elementos de 'p'.
  El tiempo de ejecución debe ser O(1).
 */
nat cantidadEnPila(TPila p) { return 0; }

/*
  Apila 'info' en 'p'-
  Devuelve 'p'.
  La TPila resultado no comparte memoria con 'info'.
  El tiempo de ejecución debe ser O(1).
 */
TPila apilar(Producto dato, TPila p) { return NULL; }

/*
  Devuelve el elemento más nuevo en 'p'.
  Precondición: cantidadEnPila(p) > 0.
  El tiempo de ejecución debe ser O(1).
 */
Producto cima(TPila p) { return NULL; }

/*
  Remueve de 'p' su elemento más nuevo.
  Se libera la memoria asignada utilizada por la pila para almacenarlo.
  Devuelve 'p'.
  Precondición: cantidadEnPila(p) > 0.
  El tiempo de ejecución debe ser O(1).
 */
TPila desapilar(TPila p) { return NULL; }
