/*
 * Hecho por Estrada Bernal José Bryan
 * Lista Simplemente Ligada: es un conjunto de elementos
 * del mismo tipo, donde cada elemento estan ligados al siguiente
 * */
#ifndef __ListaLigada_H_
#define __ListaContinua_H

typedef struct nodo{
	int element;
	struct nodo *siguiente;
	} *LISTA;	
void inicializarLista (LISTA *list);
void agregar(LISTA *list,int element);
void eliminar (LISTA *list,int posicion);
int mostrar(LISTA *list, int posicion);

#endif
