/*O programa abaixo permite a construção de uma lista duplamente encadeada através da criação
de nós, estruturas contendo dados de Pessoas, e inserindo cada nó no início da lista, conforme
código abaixo:*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DPessoa{
 char nome[30];
 int idade;
 char sexo;
}Pessoa;

typedef struct No{
 Pessoa p;
 struct No *ant, *prox;
}ListaDE;


ListaDE* insereInicio (ListaDE *l)
{
 ListaDE *novo;
 char nome[30], sexo; int idade;

  novo = (ListaDE *) malloc (sizeof (ListaDE));
  
  printf("\nNome :"); 
  scanf("%s",&novo->p.nome);
  
  printf("\nIdade :"); 
  scanf("%d",&novo->p.idade);
  
  printf("\nSexo (F ou M) :"); 
  scanf("%s",&novo->p.sexo);

   novo->prox = l;
   novo->ant = NULL;
    
    if (l!=NULL) 
     {
       l->ant = novo;
       
       l = novo;
     }
       
return l;
}

void percorre (ListaDE *l){
   
   if (l == NULL) 
    {
      return;
    }
   else 
    {
     printf("%s - %d - %c \n",l->p.nome, l->p.idade, l->p.sexo);
     percorre(l->prox); 
    }

}
int main()
{
  ListaDE *l;
  l = NULL;
  l = insereInicio(l);
  l = insereInicio(l);
  l = insereInicio(l);

   percorre(l);


system("PAUSE");
return(0);
}
