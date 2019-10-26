#ifndef __ARBOLBINARIO_H__
#define __ARBOLBINARIO_H__
/*
Autor: Estrada Bernal Jose Bryan
fecha: 24 de Oct del 2019
Este TAD es un Atbol Binario donde se cumple la condicion
de instertar elementos mas pequeños a la izquierda y elementos mas grandes que la raiz
a la derecha
*/

//Estructura del arbol

typedef struct nodo{
  int elemento;
  struct nodo *derecho;
  struct nodo *izquierdo;
}*Arbol, nodo;

//insertar dato
void insertData(Arbol *root,int elemento);
void preOrden(Arbol root);
void postOrden(Arbol root);
void inOrden(Arbol root);
#endif
