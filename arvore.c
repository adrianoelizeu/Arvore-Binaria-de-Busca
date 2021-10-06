#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Arvore *criar(){
  Arvore * arv = malloc(sizeof(Arvore));
  if(arv) //se arv diferente de NULL
  arv->raiz = NULL;
  return arv;
}

No *inserirsub(No *raiz, int n){
  if(raiz == NULL){

  No *criar = malloc(sizeof(No));
    criar->valor = n;
    criar->esquerda = NULL;
    criar->direita = NULL;
    return criar;
  }
  else{
    if (n < raiz-> valor){
      raiz->esquerda = inserirsub(raiz->esquerda, n);
    }
    else
      raiz->direita = inserirsub(raiz->direita, n);
    }
  return raiz;
}

void inseirir(Arvore* arv, int n){
  arv->raiz = inserirsub(arv->raiz, n);
}

void imprimirDecrescente(No* raiz){ // percorrer em decrescente
  if(raiz != NULL){
    imprimirDecrescente(raiz->direita);
    printf("[%d]", raiz->valor);
    imprimirDecrescente(raiz->esquerda);
  }
}

void imprimir_Decrecente(Arvore* arv){
  imprimirDecrescente(arv->raiz);
}

void imprimirPreOrdem(No* raiz){ 
  if(raiz != NULL){
    printf("[%d]", raiz->valor);
    imprimirPreOrdem(raiz->esquerda);
    imprimirPreOrdem(raiz->direita); 
  }
}

void imprimirPosOrdem(No* raiz){
  if(raiz != NULL){
    imprimirPosOrdem(raiz->esquerda);
    imprimirPosOrdem(raiz->direita);
    printf("[%d]", raiz->valor);
  }
}

void imprimmir_PosOrdem(Arvore* arv){
  imprimirPosOrdem(arv->raiz);
}

void imprimirLargura(No* raiz){ //percorrer em largura
  int inicio = 0, fim = 1;
  No* fila = malloc(sizeof(No));
  fila[0] = *raiz;
  while (fim > inicio){
    *raiz = fila [inicio++];
    printf("[%d]", raiz->valor);
    if (raiz->esquerda != NULL){
      fila[fim++] = *raiz->esquerda;
    }
    if (raiz->direita != NULL){
      fila[fim++] = *raiz->direita;
    }
  }
  free(fila);
}

void imprimir_Largura(Arvore* arv){
  imprimirLargura(arv->raiz);
}



  int contar(No *arv){ //contar os nós
   if(arv == NULL)
    return 0;
   else
    return 1 + contar(arv->esquerda) + contar(arv->direita);
}

int min(No *a){   //nó menor
  if(a->esquerda != NULL){
    return min(a->esquerda);
  }
  else{
    return a->valor;
  }
}

int max(No*a){ //nó maior
  if (a->direita != NULL){
    return max(a->direita);
  }
  else{
    return a->valor;
  }
}








