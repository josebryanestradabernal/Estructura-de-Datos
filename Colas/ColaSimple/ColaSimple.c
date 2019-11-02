#include "ColaSimple.h"
#include <stdio.h>
#include <stdlib.h>
void encolar (COLA cola,int elemento){
  if (cola->ultimo==NULL && cola->primero==NULL){
    nodo *nuevo=malloc(sizeof (nodo));
    nuevo->siguiente=NULL;
    nuevo->elemento=elemento;
    cola->ultimo=nuevo;
    cola->primero=nuevo;
  }
  else {
    nodo *nuevo=malloc(sizeof(nodo));
    nuevo->siguiente=NULL;
    nuevo->elemento=elemento;
    cola->ultimo->siguiente=nuevo;
    cola->ultimo=nuevo;
  }
}
int desencolar(COLA cola){
  int auxele=0;
  if (cola->ultimo==cola->primero && cola->primero!=NULL){
    auxele=cola->ultimo->elemento;
    free(cola->ultimo);
    cola->ultimo=NULL;
    cola->primero=NULL;
  }
  if (cola->primero!=NULL){
    nodo *aux=cola->primero;
    auxele=aux->elemento;
    cola->primero=aux->siguiente;
    free(aux);
}
  return auxele;
}
void inicializar(COLA *cola){
  struct cola *nueva=malloc(sizeof(struct cola));
  nueva->ultimo=NULL;
  nueva->primero=NULL;
  *cola=nueva;
}
