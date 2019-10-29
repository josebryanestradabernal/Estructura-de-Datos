#include<stdio.h>
#include"ligadaDoble.h"
int main (){
  LISTA list=NULL;
  for (int a=3;a>=0;a--)agregar(&list,a);
  for (int a=0;a<=3;a++)printf("%i \n",mostrar(list,a));
  eliminar(&list,0);
  printf("%i \n",mostrar(list,0));
}
