#ifndef __STACK_H__
#define __STACK_H__
typedef struct stack{
  int elemento;
  struct stack *siguiente;
}*STACK;
void push(STACK *pila,int elemento);
int pop(STACK *pila);
void mostrarPila(STACK *pila);
#endif
