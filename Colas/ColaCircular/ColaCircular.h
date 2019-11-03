#ifndef __COLACIRCULAR_H__
#define __COLACIRCULAR_H__
typedef struct nodo {
  struct nodo *siguiente;
  int dato;
}nodo;
typedef struct cola {
  nodo *ultimo;
  nodo *primero;
}*COLA;
void inicializar(COLA *cola);
void encolar(COLA cola,int dato);
int desencolar(COLA cola);
#endif
