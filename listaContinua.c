#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"listaContinua.h"
int inicializarLista(LISTA Lista){
  Lista->ArrayElementos=malloc(sizeof(int));
  Lista->cantElementos=0;
  if (Lista->ArrayElementos==NULL)return -1;
  return 0;
}
int agregar (LISTA list,int elemento){
  list->ArrayElementos=realloc(list->ArrayElementos,(list->cantElementos+1)*sizeof(int));
  if (list->ArrayElementos==NULL)return -1;
  *(list->ArrayElementos+list->cantElementos)=elemento;
  list->cantElementos++;
  return 0;
}
int mostrar(LISTA  list,int posicion){
  if (!(posicion<list->cantElementos)){
    printf("error no existe esa posicion");
    return 0;}
    return *(list->ArrayElementos+posicion);
  }
  int eliminar(LISTA list,int posicion){
    if (!(posicion<list->cantElementos)){
      printf("error no existe esa posicion");
      return 1;}
      int auxposi=0;
      lista aux;
      aux.cantElementos=(list->cantElementos-1);
      aux.ArrayElementos=malloc((list->cantElementos-1)*sizeof(int));
      for (int i=0;i<list->cantElementos;i++){
        if (posicion!=i){
          *(aux.ArrayElementos+(auxposi++))=*(list->ArrayElementos+i);
        }
      }
      free(list->ArrayElementos);
      list->ArrayElementos=aux.ArrayElementos;
      list->cantElementos=aux.cantElementos;
      return 0;
    }
