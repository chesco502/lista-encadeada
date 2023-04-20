#include <stdio.h>
typedef struct reg {
   int         conteudo;
   struct reg *prox;
} celula;
typedef struct reg celula;
    void print(struct reg a){
    struct reg *ponteiro;
    ponteiro = &a;
    while(ponteiro!=NULL){
        printf("%i\n",ponteiro->conteudo);
        ponteiro=ponteiro->prox;
        
    }
}


int main()
{
    celula a;
    a.conteudo =1;
    celula b;
    b.conteudo=2;
    a.prox=&b;
    celula c;
    c.conteudo=3;
    b.prox=&c;
    print(a);
    return 0;
}
