/* 5463192 */

/*
  Módulo de definición de 'TLista'.

  Los elementos de tipo TLista son Listas de elementos de tipo TFecha.

  Laboratorio de Programación 2.
  InCo-FIng-UDELAR
 */

#include "../include/utils.h"
#include "../include/lista.h"
#include "../include/vencimiento.h"
#include "../include/fecha.h"

// Representación de 'TLista'.
// Se debe definir en Lista.cpp.
// Declaración del tipo 'TLista'
struct _rep_lista{
  _rep_lista* sig;
  Vencimiento ven;
};

// Que sentido tiene esta funcion?
/*
  Devuelve una TLista vacía (sin elementos).
  El tiempo de ejecución debe ser O(1).
 */
TLista crearLista(){
  TLista lista = new _rep_lista;
  lista -> ven = NULL;
  lista -> sig = NULL;
  return lista; }

/*
  Libera la memoria asignada a la TLista 'p' y la de todos sus elementos.
  El tiempo de ejecución debe ser O(n), siendo 'n' la cantidad de elementos de la TLista
  'p'.
 */
void liberarLista(TLista p){
  while(p != NULL){
    TLista aux = p;
    liberarVencimiento(p -> ven);
    aux = p->sig;
    delete p;
    p = aux;
  }
}

/*
  Devuelve si la TLista 'p' es vacia.
  El tiempo de ejecución debe ser O(1).
 */
bool esVaciaLista(TLista p){
  if (p == NULL){
    return true;
  }
  else return false;
}

/*
  agregarALista 'venc' en 'p'-
  Devuelve 'p' con 'venc' insertado.
  La TLista resultado no comparte memoria con 'venc'.
  Si ya existe un vencimiento con f_venc se le aumenta cantidad a dicho elemento
  El tiempo de ejecución debe ser O(n).
 */

TLista agregarAListaOrdenado(TLista p, TFecha f_venc, nat cantidad){

  if (p == NULL){
    TLista nuevo = new _rep_lista;
    nuevo -> ven = crearVencimiento(f_venc, cantidad);
    nuevo -> sig = NULL;
    p = nuevo;
  }else{ //p!=null
    TFecha f = obtenerFVencimiento(p -> ven);
    if (f!=NULL){
      if(compararFechas(f_venc, f) == 0){
      agregarUnidades(p->ven, cantidad);
      }else{
      if(compararFechas(f_venc, f) == -1){
      TLista nuevo = new _rep_lista;
      nuevo -> ven = crearVencimiento(f_venc, cantidad);
      nuevo -> sig = p;
      p = nuevo;
      }
      else{
        return agregarAListaOrdenado(p->sig, f_venc, cantidad);
      }
    } 
    }    
  }
  return p;

}

/*
  Devuelve el elemento en 'p' con fecha mas antigua.
  Precondición: cantidadEnLista(p) > 0.
  El tiempo de ejecución debe ser O(1).
 */

Vencimiento obtenerMasViejo(TLista p){ 
  return p -> ven;
  }

/*
	Quita de la lista al elemento con la menor fecha de vencimiento.
	Pre: la lista tiene al menos un elemento.
*/
TLista quitarMasViejo(TLista p){ 
  TLista aux = p;
  if (p->sig !=NULL){
    p = p->sig;
  }
  liberarVencimiento(aux->ven);
  delete aux;
  aux = NULL;
  return p;
}

/*
 Elimina 'cantidad' de vencimientos con fecha mas baja
en la TLista 'p'
*/
TLista quitarDeLista(TLista p, nat cantidad){ 
  nat contador = cantidad;
  while(p != NULL && contador > 0){
    contador = contador - 1;
    p = quitarMasViejo(p);
  }
  return p;
}

/*
    Imprime información de la lista en el formato siguiente:
	%Fecha vencimiento% -> %cantidad unidades%
	%Fecha vencimiento% -> %cantidad unidades%
	%Fecha vencimiento% -> %cantidad unidades%
*/
void imprimirInfoLista(TLista p){
  while (p!= NULL){
    imprimirVencimiento(p->ven);
    p = p->sig;
  }
}
