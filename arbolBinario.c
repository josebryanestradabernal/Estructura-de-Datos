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
int main(){
  Arbol root;
  insertData(&root,8);
  insertData(&root,5);
  insertData(&root,10);
  insertData(&root,12);
  insertData(&root,9);
  insertData(&root,2);
  insertData(&root,1);
  insertData(&root,0);
  insertData(&root,17);
  insertData(&root,6);
  preOrden(root);
  printf("\n");
  postOrden(root);
  printf("\n");
  inOrden(root);
  printf("\n");

  }
