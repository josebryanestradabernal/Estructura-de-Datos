#include "ColaCircular.h"
#include <stdlib.h>
#include <stdio.h>
void inicializar(COLA *cola){
  COLA nueva=malloc(sizeof(struct cola));
  *cola=nueva;
  (*cola)->ultimo=NULL;
  (*cola)->primero=NULL;
}
void encolar(COLA cola,int dato){
  if (cola->ultimo==NULL && cola->primero==NULL){
    nodo *nuevo=malloc(sizeof(struct nodo));
    nuevo->dato=dato;
    nuevo->siguiente=nuevo;
    cola->ultimo=nuevo;
    cola->primero=nuevo;
  }
  else{
    nodo *nuevo=malloc(sizeof(struct nodo));
    nuevo->dato=dato;
    nuevo->siguiente=cola->primero;
    cola->ultimo->siguiente=nuevo;
    cola->ultimo=nuevo;
  }
}
int desencolar(COLA cola){
  int aux=0;
  if (cola->ultimo==cola->primero && cola->ultimo!=NULL){
    aux=cola->ultimo->dato;
    free(cola->ultimo);
    cola->ultimo=NULL;
    cola->primero=NULL;
    printf("Ultimo\n");
  }
  if (cola->primero!=NULL){
    nodo *auxi=cola->primero;
    aux=auxi->dato;
    cola->ultimo->siguiente=auxi->siguiente;
    cola->primero=auxi->siguiente;
    free(auxi);
  }
  return aux;
}
