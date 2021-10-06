#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int main(void){
 int x;
Arvore *arv = criar();


inseirir(arv,6);
inseirir(arv,5);
inseirir(arv,8);
inseirir(arv,10);
inseirir(arv,4);
inseirir(arv,9);
inseirir(arv,7);
inseirir(arv,1);

imprimir_Decrecente(arv);

printf("\n");
printf("\n");

imprimir_Largura(arv);



printf("\n");
printf("\n");


  return 0;
}