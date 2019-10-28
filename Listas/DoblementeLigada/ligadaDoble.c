#include "ligadaDoble.h"
void agregar (LISTA *lista,int elemento){
  if (*lista==NULL){
    struct nodo *node=malloc(sizeof(struct nodo));
    *lista=node;
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
    *lista=node;
  }
}
void eliminar(LISTA *lista,int posicion){
  
}
int mostrar (LISTA *lista){

}
