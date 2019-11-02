#include "ColaSimple.h"
#include <stdio.h>
int main (){
COLA cola;
inicializar(&cola);
for (int  i=0;i<100;i++)encolar(cola,i);
for (int i=0;i<103;i++)printf("%i\n",desencolar(cola));
for (int  i=1;i<2;i++)encolar(cola,i);
printf("%i\n",desencolar(cola));
}
