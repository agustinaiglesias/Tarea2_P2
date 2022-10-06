/* 5463192 */

/*
  Módulo de implementacion de 'Producto'.

  Los elementos de tipo 'Producto' son punteros a una estructura (que debe
  definirse en producto.cpp).

  Laboratorio de Programación 2 2do semestre 2022.
  InCo-FIng-UDELAR
 */

#include "../include/utils.h"
#include "../include/fecha.h"
#include "../include/producto.h"
#include "../include/lista.h"

// Representación de 'Producto'.
// Se debe definir en producto.cpp.
// struct _rep_producto;
// Declaración del tipo 'Producto'.
struct _rep_producto{
	nat id;
	char* nombre;
	nat cantidadUnidades;
	TLista unidades;
};

/* Operaciones de producto */

/*
  Devuelve un 'producto'.
 */
Producto crearProducto(nat identificadorDeProducto, char* nombre){ return NULL; } 

/*
  Libera la memoria reservada por 'producto'.
 */
void liberarProducto(Producto producto){}

/*
  Devuelve la cantidad de unidades 'producto'.
 */
nat obtenerCantidad(Producto producto){ return 0; }

/*
  Devuelve el identificador de producto de 'producto'.
 */
nat obtenerIdentificadorDeProducto(Producto producto){ return 0; }

/*
    Agrega cantidad elementos a la unidad.
    Pre: cantidad y f_venc deben ser mayores a cero. 
 */
void agregarUnidades(Producto producto, nat cantidad, TFecha f_venc){} 

/*
    Quita cantidad elementos al producto con fecha de vencimiento más
    próxima.
    Pre: cantidad debe ser mayor a cero.  
 */
void quitarUnidades(Producto producto, nat cantidad){} 

/*
    Quita todas las unidades de productos cuya fecha de vencimiento es menor a
    la fecha actual.  
 */
void quitarVencidos(Producto producto, TFecha fecha){} 

/*
  Imprime los datos del producto en el formato específicado en la letra.
 */
void imprimirProducto(Producto producto){
  printf("Información del producto %d - %s\n", producto->id, producto->nombre);
  printf("Total de unidades: %d\n", producto->cantidadUnidades);
  imprimirInfoLista(producto->unidades);
} 