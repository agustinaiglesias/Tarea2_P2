/* 5463192 */

/*
  Módulo de implementación de 'GestionDeposito'.

  Los elementos de tipo 'GestionDeposito' son punteros a una estructura (que debe
  definirse en gestionDeposito.cpp).

  Laboratorio de Programación 2 2do semestre 2022.
  InCo-FIng-UDELAR
*/

#include "../include/utils.h"
#include "../include/fecha.h"
#include "../include/gestionDeposito.h"
#include "../include/deposito.h"

// Representación de 'GestionDeposito'.
// Se debe definir en gestionDeposito.cpp.
// struct _rep_gestionDeposito;
// Declaración del tipo 'GestionDeposito'.
struct _rep_gestionDeposito{
	TDeposito deposito;
};

/* Operaciones para controlar el depósito.*/
/* Operaciones de gestionDeposito */

/*
  Devuelve un 'gestionDeposito' sin productos asignados.
 */
TGestionDeposito crearGestionDeposito() { return NULL; }

/*
  Libera la memoria reservada por 'gestionDeposito' y por las subestructuras utilizadas. 
 */
void liberarGestionDeposito(TGestionDeposito gestionDeposito) {}

/* 
  Se deben retirar todos los productos cuya fecha de 
  vencimiento sea menor o igual que la fecha que se pasa por parametro.
  Recordar que los productos pueden quedar con cantidad 0.   
*/
void quitarVencidosDeposito(TGestionDeposito gestionDeposito, TFecha fecha) {}

/*
  Agrega un producto con identificador idProd y nombre nombreProducto al deposito.
*/
bool agregarProductoDeposito(TGestionDeposito gestionDeposito, nat idProd, char* nombreProducto) { return false; }

/*
  Agrega 'cantidad' productos con identificador 'idProd' y con fecha de vencimiento 'f' de tipo TFecha. Si 'f_actual' es mayor a la fecha 'f' entonces el producto no se deberá agregar y la función debe devolver false. En caso contrario la función debe devolver true. 
  Si no existen unidades con esa fecha de vencimiento, entonces crea un vencimiento y agrega cantidad unidades. 
*/
bool agregarCantidadProductoDeposito(TGestionDeposito gestionDeposito, nat idProd, nat cantidad, TFecha f, TFecha f_actual) { return false; }

/*
  Quita cantidad productos con identificador idProd. 
  Si el producto no existe, entonces se debe devolver falso.
*/
bool quitarCantidadProductoDeposito(TGestionDeposito gestionDeposito, nat idProd, nat cantidad) { return false; }

/*
  Quita un producto con identificador idProd que no tiene unidades.
  Si el producto no existe o tiene unidades entonces devuelve falso.
*/
bool quitarProductoDeposito(TGestionDeposito gestionDeposito, nat idProd) { return false; }

/*
  Imprime la información de un producto con el formato especificado en la letra. 
  Se listan los vencimientos y cantidad por vencimiento para el producto. 
  Si el pedido no existe, entonces devuelve falso. 
 */
bool imprimirProductoResumenDeposito(TGestionDeposito gestionDeposito, nat idProd) { return false; }

/*
    Quita todas las unidades que vencerán dentro de los próximos cantidadDias días.
    Por ejemplo si la fecha actual es 10 y cantidadDias es 5, entonces se deberán
    quitar las unidades que tengan fecha de vencimiento el día 15 o antes.
    Pre: cantidad debe ser mayor a cero.  
    Se denen quitar las unidades tanto del depósito, como de los pedidos.
 */
void quitarProximosAVencerDeposito(TGestionDeposito gestionDeposito, TFecha fecha) {}

/*
  Imprime el resumen del depósito en el formato especificado en la letra. .
 */
void imprimirResumenGestionDeposito(TGestionDeposito gestionDeposito) {}
