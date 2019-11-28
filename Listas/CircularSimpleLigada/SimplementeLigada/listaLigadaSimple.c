#include <stdio.h>
#include <stdlib.h>
#include "listaLigadaSimple.h"
void inicializarLista (LISTA *list){
	*list=NULL;
}
void agregar(LISTA *list,int element){
	LISTA aux=malloc(sizeof(struct nodo));
	aux->siguiente=*list;
	aux->element=element;
	*list=aux;
}
void eliminar (LISTA *list,int posici){
	LISTA aux=*list;
	LISTA auxAnterior=*list;

	for (int cont=0;cont<posici && aux!=NULL;cont++){
		auxAnterior=aux;
		aux=aux->siguiente;}
		if (aux!=NULL && posici==0){
			if ((*list)->siguiente!=NULL){
				aux=(*list)->siguiente;
				//es a donde apuntaba *list
				*list=aux;
			}
			else *list=NULL;
			free(auxAnterior);
		}
		else if (aux!=NULL){
			auxAnterior->siguiente=aux->siguiente;
			free(aux);
		}
	}
	int  mostrar(LISTA *list, int posici){
		LISTA aux=*list;
		for (int cont=0;cont<posici && aux!=NULL;cont++) aux=aux->siguiente;
		if (aux!=NULL){
			return aux->element;
		}
	else return 0;
	}

	void mostrarLista (LISTA list){
	  LISTA aux=list;
	  while (aux!=NULL){
	      printf("%i ",aux->element);
	      aux=aux->siguiente;
	  }
	  printf("\n");
	}
