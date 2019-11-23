#include<stdio.h>
#include"listaLigadaSimple.h"
int main (){
	LISTA list=NULL;
	agregar(&list,3);
	agregar(&list,4);
	agregar(&list,5);
	printf("%d  \n",mostrar(&list,0));
	eliminar(&list,0);
	eliminar(&list,1);
	printf("%d \n",mostrar(&list,0));
	agregar(&list,6);
	mostrarLista(list);
	}
