/*Creado por Estrada Bernal José Bryan
 *TAD Lista continua:
 *Es un conjunto de elementos del mismo tipo que se encuentran alojados en
 *memoriade manera continua, como un vector o array
 * */
#ifndef __ListaContinua_H
#define    __ListaContinua_H
typedef struct lista{
int *ArrayElementos;
int cantElementos;
}*LISTA,lista;
/*Permite inicializar la lista (reservarle memoria inicializar en 0
 * el numero de elementos que contiene
 * */
int inicializarLista(LISTA list);
/*
 *incrementa la memoria reseervada para introducir un nuevo elemento
 *consideraciones:
 *puede haber error en la asignacion de la memoria de ser asi retorna -1
 *si todo esta correcto solo retorna 0
 * */
int agregar(LISTA list,int Elemento);
/*retorna el elemento en una dada posicion dentro de la lista
 * Consideraciones:
 * la posicion no existe, retornara 0 para no causar error aparte se 
 * imprimira en pantalla el error para ser explicito
 * */
int mostrar (LISTA list,int Posicion);
/* Elimina el elemento por posicion del array 
 * si se elimina con exito retorna 0
 * si ocurre error de memoria retorna 1
 * */
int eliminar (LISTA list,int Posicion);


#endif
