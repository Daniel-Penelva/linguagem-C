#include<stdio.h>
#include<stdlib.h>
/* A typedef = vai ajudar e facilitar a utiliza��o struct, por isso cria um tipo que vai ajudar a utiliza��o do struct, ao inves de definir cada
variavel usando o struct*  -> struct cadastro = o nome da struct que vou criar -> formulario = o nome para esse tipo que esta definido*/

typedef struct cadastro Formulario;   //aqui cria um tipo para a estrutura, apenas para facilitar sua utiliza��o

struct cadastro
{
  char nome[40];
  int idade;
  char sexo;      
};

int main(void)
{

   Formulario cad;        // o nome da variavel que eu quero(� uma simplifica��o dela) "cad" do tipo "cadastro" ou pode ser "cadastro" mesmo.    
   Formulario *ponteiro_cad; //ponteiro para "ponteiro_cad" para um tipo "Formulario"
   ponteiro_cad = &cad; // "ponteiro_cad" aponta para o endere�o da memoria de "cad", ou seja,da struct cadastro , cada uma delas tem uma variavel(nome,idade,sexo) com seus respectivos endere�os na MP    
      
 printf("\nRealizar Cadastro\n");  
 
 printf("\nEntre com o seu nome:");   
  gets((*ponteiro_cad).nome);   // lembrar que gets nao precisa o & comercial  ou getline(ponteiro_cad->nome,40);
  
 printf("\nEntre com a sua idade:"); 
 scanf("%d",&(*ponteiro_cad).idade);
 
 getchar();      // o "getchar()" � pra qnd aperta o enter passar para a proxima linha
 printf("\nEntre com o sexo, apenas M (masculino) e F (feminino):");
 scanf("%c",&(*ponteiro_cad).sexo);
 getchar();
      
printf("\n\n");      
  printf("\nCadastro Realizado com sucesso\n"); 
  
  printf("\t Nome:%s \n",(*ponteiro_cad).nome);  
  printf("\t Idade:%d \n",(*ponteiro_cad).idade); 
  printf("\t Sexo:%c \n",(*ponteiro_cad).sexo);
   
 
printf("\n\n");
system("pause");
}
// link :http://www.youtube.com/watch?v=oB_6sMzo1eM&feature=relmfu
