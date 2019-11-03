#include "ColaCircular.h"
#include <stdio.h>
int main (){
  COLA cola;
  inicializar(&cola);
  for(int i=0;i<21;i++)encolar(cola,i);
  for(int i=0;i<24;i++)printf("%i\n",desencolar(cola));
}
