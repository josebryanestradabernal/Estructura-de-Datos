#include "arbolBinario.h"
#include <stdio.h>
#include <stdlib.h>
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
  Buscar(root,17)?printf("Encontrado\n"):printf("No encontrado\n");
  elimina(&root,8);
  preOrden(root);
  }
