#include <stdio.h>
#include <stdlib.h>
// a linha abaixo "chama" a biblioteca respons�vel por codifica��o da linguagem
// para o portugu�s
#include <locale.h>

/* Linguagem C - Aula2 - Fundamentos */

int main(int argc, char *argv[])
{
	//setando a biblioteca para portugu�s
	setlocale(LC_ALL,"Portuguese");
	//a linha abaixo muda a cor do fundo e da fonte (fundo fonte)
	system("COLOR 2E");
	printf("Ol� Mundo\n");
	system("PAUSE");
	//a linha abaixo limpa a tela
	system("CLS");
	printf("By Barry\n");
	system("PAUSE");
	return 0;
}





