  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include <stdlib.h>
  typedef struct pila {
      int elemento;
      struct pila *siguiente;
  }*STACK,nodo;
  void push(STACK *pila, int element){
      STACK new=malloc(sizeof(nodo));
      new->siguiente=*pila;
      new->elemento=element;
      *pila=new;
  }
  int pop(STACK *pila){
      if (*pila){
       int aux=(*pila)->elemento;
       STACK auxp=*pila;
       *pila=(*pila)->siguiente;
        free(auxp);
      return aux;
      }
      else return 0;
  }

  void hanoi(int n,STACK *O,STACK *A,STACK *D,char o,char a,char d){
      if (n==1){
          int po=pop(O);
          printf("Moving ring %d from %c to %c\n",po,o,d);
          push(D,po);
               }
      else {
          hanoi(n-1,O,D,A,o,d,a);
          int po=pop(O);
          printf("Moving ring %d from %c to %c\n",po,o,d);
          push(D,po);
          hanoi(n-1,A,O,D,a,o,d);
           }
  }
  int main() {
  int num;
      scanf("%d",&num);
      STACK O=NULL,A=NULL,D=NULL;
      //inicializar origen
      for (int i=num;i>0;i--)push(&O,i);
      hanoi(num,&O,&A,&D,'A','C','B');

      return 0;
  }
