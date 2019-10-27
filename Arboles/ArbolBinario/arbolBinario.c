#include "arbolBinario.h"
#include <stdio.h>
#include <stdlib.h>
void  insertData(Arbol *root,int elemento){
  if(*root==NULL){
    nodo *node=(nodo*)malloc(sizeof(nodo));
    *root=node;
    (*root)->izquierdo=NULL;
    (*root)->derecho=NULL;
    (*root)->elemento=elemento;
  }
  else{
    if ((*root)->elemento>=elemento)
      insertData(&(*root)->izquierdo,elemento);
    else{
     insertData(&(*root)->derecho,elemento);}
  }

}
void preOrden(Arbol root){
  if (root==NULL)return;
  else {
    preOrden(root->izquierdo);
    printf("%i ",root->elemento);
    preOrden(root->derecho);

  }
}
int Buscar (Arbol root){

  
}
void postOrden(Arbol root){
  if (root==NULL)return;
  else{
    postOrden(root->derecho);
    printf("%i ",root->elemento);
    postOrden(root->izquierdo);
  }
}
void inOrden(Arbol root){
  if (root==NULL)return;
  else{
    printf("%i ",root->elemento);
    inOrden(root->izquierdo);
    inOrden(root->derecho);
  }
}
