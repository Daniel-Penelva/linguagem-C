#include <stdio.h>
#include <conio.h> //caso utilize getche() ou getch()
#include <iostream.h> // caso utilize system("Pause")

main()
{
	int n1, n2, n3;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%d", &n1);
	printf("Digite a segunda nota: ");
	scanf("%d", &n2);
	printf("Digite a terceira nota: ");
	scanf("%d", &n3);
	media = ((float)n1 + n2 + n3)/3;
	printf("\n\nMedia %.2f \t:", media);
	if (media < 3.0)
		printf("Reprovado!");
	else
		if ((media >= 3.0) && (media < 7.0))
			printf("Prova Final!");
		else
			printf("Aprovado!");
	getch(); //ou
	
	//system("Pause"); 
   /* ou getche();  utilize as funções getch() ou getche() para ver o resultado na tela.
   Elas fazem parte do arquivo de cabeçalho conio.h e permitem que o programa leia um caractere do teclado usando entrada direta (sem buffer).
   O getche() produz produz eco, já o getch() não.
   Além disso, você pode usar system("Pause") que é um recurso do Windows. Não roda em Linux. Inclusive gera um warning. 
   Espera o usuário pressionar alguma tecla. Do arquivo de cabeçalho iostream.h
   */
}

