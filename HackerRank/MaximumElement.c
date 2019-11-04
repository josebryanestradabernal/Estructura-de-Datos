#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct stack{
  int elemento;
  struct stack *siguiente;
}*STACK;
void push(STACK *pila,int elemento){
if (*pila==NULL){
  struct stack *nodo=malloc(sizeof(struct stack));
  nodo->elemento=elemento;
  nodo->siguiente=NULL;
  *pila=nodo;
}
else{
  struct stack *nodo=malloc(sizeof(struct stack));
  nodo->siguiente=*pila;
  nodo->elemento=elemento;
  *pila=nodo;
}
}
int pop(STACK *pila){
int aux=0;
if (*pila!=NULL){
  aux=(*pila)->elemento;
  STACK aux2=(*pila)->siguiente;
  free(*pila);
  *pila=aux2;
}
else if (*pila==NULL)printf("Vacio");
return aux;
}
int main() {
    STACK pila=NULL;
    int c=0,aux;
    int max=0;
    scanf("%i",&c);
    for(int i=0;i<c;i++){
        scanf("%i",&aux);
        if (aux==1){
            int elemento;
            scanf(" %i",&elemento);
            push(&pila,elemento);
            if (elemento>max)max=elemento;
        }
        else if (aux==2){

            if (max==pop(&pila)){
            max=0;
            STACK auxhead=pila;
            while(auxhead!=NULL){
                if (auxhead->elemento>max)max=auxhead->elemento;
                auxhead=auxhead->siguiente;
            }
            }
        }
        else if (aux==3){printf("%i\n",max);
        }

    }

    return 0;
}
