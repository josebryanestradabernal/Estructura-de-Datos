#ifndef __LIGADADOBLE_H__
#define __LIGADADOBLE_H__
/*
lista doblemente ligada hecha por Jose Bryan Estrada Bernal
*/
typedef struct nodo {
  int elemento;
  struct nodo *siguiente;
  struct nodo *anterior;
}*LISTA;
void agregar (LISTA *lista,int elemento);
void eliminar(LISTA *lista,int posicion);
int mostrar(LISTA *lsita);

#endif
