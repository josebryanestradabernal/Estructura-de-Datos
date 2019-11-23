#include "arbolBinario.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
  Arbol root=NULL;
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
  elimina(&root,0);
  preOrden(root);
  }
