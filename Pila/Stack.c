#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>
void push(STACK *pila,int elemento){
if (*pila==NULL){
  struct stack *nodo=malloc(sizeof(struct stack));
  nodo->elemento=elemento;
  nodo->siguiente=NULL;
  *pila=nodo;
}
else{
  struct stack *nodo=malloc(sizeof(struct stack));
  nodo->siguiente=*pila;
  nodo->elemento=elemento;
  *pila=nodo;
}
}
int pop(STACK *pila){
int aux=0;
if (*pila!=NULL){
  aux=(*pila)->elemento;
  STACK aux2=(*pila)->siguiente;
  free(*pila);
  *pila=aux2;
}
else if (*pila==NULL)printf("Vacio");
return aux;
}
void mostrarPila (STACK list){
  STACK aux=list;
  while (aux!=NULL){
      printf("%i ",aux->elemento);
      aux=aux->siguiente;
  }
  printf("\n");
}
