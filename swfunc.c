
//----------------------------�rea de Declara��es ---------------------------------------
#include <stdio.h>
#include <stdlib.h>

/*
 * Author Barry Allen
 */

//declarando fun��es
//void nome_da_fun��o (void);
void windows(void);
void linux(void);

//declarando uma vari�vel global (p�blica)
int opcao;

//----------------------------------------------------------------------------------------
int main(int argc, char *argv[])
{
	
	printf("Sistemas disponiveis:\n");
	printf("1. Windows\n");
	printf("2. Linux\n");		
	printf("Digite a opcao desejada: ");
	scanf("%d",&opcao);
	//estrutura switch case normalmente usada para op��es
	switch(opcao)
	{
		// caso o conte�do da vari�vel opcao seja 1
		case 1:
		// chamar a fun��o windows
		windows();	
		break;
		
		// caso o conte�do da vari�vel opcao seja 2
		case 2:
		// chamar a fun��o linux
		linux();		
		break;
		
		// caso contr�rio (qualquer n�mero diferente de 1 e 2)
		// neste caso n�o usa o break
		default:
			printf("%d\n",opcao);//usado para apoio ao entendimento da l�gica
			printf("Opcao invalida\n");
		
	}
	system("PAUSE");
	return 0;
}
//-------------------------------------Fun��es---------------------------------------

//Construindo a fun��o Windows
void windows(void)
{
	system("CLS");
	system("COLOR 1F");
	printf("Escolhido a opcao %d\n",opcao);
	printf("Carregando o Windows...............\n");
} 

//Construindo a fun��o Linux

void linux(void)
{
	system("CLS");
	system("COLOR 4E");
	printf("Escolhido a opcao %d\n",opcao);
	printf("Carregando o Linux....\n");
} 





