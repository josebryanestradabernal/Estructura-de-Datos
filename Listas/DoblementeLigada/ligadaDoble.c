#include <stdlib.h>
#include <stdio.h>
#include "ligadaDoble.h"
void agregar (LISTA *lista,int elemento){
  if (*lista==NULL){
    struct nodo *node=malloc(sizeof(struct nodo));
    (*lista)=node;
    (*lista)->siguiente=NULL;
    (*lista)->anterior=NULL;
    (*lista)->elemento=elemento;
  }
  else {
    struct nodo *node=malloc(sizeof(struct nodo));
    node->anterior=NULL;
    node->elemento=elemento;
    node->siguiente=(*lista);
    (*lista)->anterior=node;
    (*lista)=node;
  }
}
void eliminar(LISTA *lista,int posicion){
if (*lista==NULL){
  printf("Esta Vacía\n");
  return;
}
if (posicion==0){
  if ((*lista)->siguiente==NULL){
    free(*lista);
    *lista=NULL;
  }
  else {
    struct nodo *next=(*lista)->siguiente;
    next->anterior=NULL;
    free(*lista);
    *lista=next;
  }
  return;
}
if (posicion>0){
  struct nodo *aux=*lista;
  int i=0;
  for (;i<posicion && aux->siguiente!=NULL;i++){
    aux=aux->siguiente;
  }
  if (posicion==i){
    if (aux->siguiente==NULL){
      aux->anterior->siguiente=NULL;
    }
    else{
      aux->anterior->siguiente=aux->siguiente;
      aux->siguiente->anterior= aux->anterior;
    }
    free(aux);
  }
  return;
}

}
int mostrar (LISTA lista,int posicion){
  struct nodo *aux=lista;
  for (int i=0;i<posicion && aux!=NULL;i++)aux=aux->siguiente;
  if (aux!=NULL)return aux->elemento;
  return 0;
}
