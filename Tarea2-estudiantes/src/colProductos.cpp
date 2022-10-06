/* 5463192 */

/*
  Módulo de implementación de 'ColProductos'.

  Laboratorio de Programación 2.
  InCo-FIng-UDELAR
 */

#include "../include/producto.h"
#include "../include/pila.h"
#include "../include/utils.h"
#include "../include/colProductos.h"

// Representación de 'ColProductos'.
// Declaración del tipo 'TColProductos'
struct rep_colproductos{
  Producto prod;
  rep_colproductos *izq, *der;
};

/*
  Devuelve un 'ColProductos' vacío (sin elementos).
  El tiempo de ejecución debe ser O(1).
 */
TColProductos crearColProductos(){ return NULL; }

/*
  Libera la memoria asociada a 'colProd' pero no la de sus productos.
  El tiempo de ejecución debe ser O(n), siendo 'n' la cantidad de elementos de
  'colProd'.
 */
void liberarColProductos(TColProductos colProd){}

/*
  Devuelve True si el Producto cuyo componente natural es 'idProd'.
  Si 'idProd' no pertenece a 'colProd', devuelve el árbol vacío.
  El tiempo de ejecución debe ser O(log(n)).
*/
bool existeProductoEnColProductos(nat idProd, TColProductos colProd){ return false; }

/*
  Devuelve el Producto cuyo componente natural es 'idProd'.
  Si 'idProd' no pertenece a 'colProd', devuelve el árbol vacío.
  El tiempo de ejecución debe ser O(log(n)).
 */
Producto buscarProductoEnColProductos(nat idProd, TColProductos colProd){ return NULL; }

/*
  Inserta 'dato' en 'colProd'. 
  Precondición: !existeProductoEnColProductos()
  El tiempo de ejecución debe ser O(log(n))
 */
TColProductos insertarEnColProductos(Producto dato, TColProductos colProd){ return NULL; }

/*
  Remueve de 'colProd' el elemento con identificador idProd.
  Devuelve 'colProd'.
  Precondición: existeProductoEnColProductos()
  El tiempo de ejecución debe ser O(log(n))
 */
TColProductos removerDeColProductos(nat idProd, TColProductos colProd){ return NULL; }

/*
  Devuelve una pila con los elementos de la colección ordenados por identificador
  de menor a mayor.
*/

TPila colProdAPila(TColProductos colProd){ return NULL; }
