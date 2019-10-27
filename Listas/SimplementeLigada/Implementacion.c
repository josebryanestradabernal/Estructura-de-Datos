#include<stdio.h>
#include"listaLigadaSimple.h"
int main (){
	LISTA list;
	agregar(&list,3);
	agregar(&list,4);
	agregar(&list,5);
	printf("%d ",mostrar(&list,0));
	eliminar(&list,0);
	eliminar(&list,1);
	printf("%d ",mostrar(&list,0));
	}
