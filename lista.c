#include <stdio.h>
typedef struct reg
{
  int conteudo;
  struct reg *prox;
} celula;
typedef struct reg celula;
void
print (struct reg a)
{
  struct reg *ponteiro;
  ponteiro = &a;
  while (ponteiro != NULL)
    {
      printf ("%i\n", ponteiro->conteudo);
      ponteiro = ponteiro->prox;

    }
}

void
remover (struct reg a, struct reg n)
{
    struct reg *ponteiro, *buffer,*N;
    N=&n;
    
  while (ponteiro != NULL)
    {
      if (&ponteiro == &N)
	{
	  buffer->prox = ponteiro->prox;
      printf("a");
	}
      buffer = ponteiro;
      ponteiro = ponteiro->prox;

    }
}

int
main ()
{
  celula a;
  a.conteudo = 1;
  celula b;
  b.conteudo = 2;
  a.prox = &b;
  celula c;
  c.conteudo = 3;
  b.prox = &c;
  remover(a,b);
  print (a);
  return 0;
}
