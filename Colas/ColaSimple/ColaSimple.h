#ifndef __COLASIMPLE_H__
#define __COLASIMPLE_H__
typedef struct nodo{
int elemento;
struct nodo*siguiente;
}nodo;
typedef struct cola{
  struct nodo *ultimo;
  struct nodo *primero;
}*COLA;
void encolar(COLA cola,int elemento);
int desencolar(COLA cola);
void inicializar(COLA *cola);

#endif
