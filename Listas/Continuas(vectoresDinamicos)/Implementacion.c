#include "listaContinua.h"
#include <stdio.h>
int main() {
  LISTA list;
  inicializarLista(&list);
  agregar(list,4);
  printf("%i\n",mostrar(list,0));
  agregar(list,5);
printf("%i\n",mostrar(list,1));  return 0;
}
