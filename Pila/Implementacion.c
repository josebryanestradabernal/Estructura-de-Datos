#include "Stack.h"
#include <stdio.h>
int main(){
  STACK pila=NULL;
  push(&pila,9);

  printf("%i\n",pop(&pila));
  push(&pila,7);
  printf("%i\n",pop(&pila));
}
