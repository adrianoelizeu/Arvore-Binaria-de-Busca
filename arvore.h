typedef struct no{
  int valor;
  struct no *esquerda, *direita;
  int num_filhos;
}No;
                    //Arvore encadeada
typedef struct{
  No *raiz;
}Arvore;

Arvore *criar();

No *inserirsub(No *raiz, int n);

void inseirir(Arvore* arv, int n);

void imprimirDecrescente(No* raiz);

void imprimir_Decrecente(Arvore* arv);

void imprimirPreOrdem(No* raiz);

void imprimirPosOrdem(No* raiz);

void imprimirLargura(No* raiz);

void imprimir_Largura(Arvore* arv);


