#include <stdio.h>
#include <stdlib.h>
/* 
* Barry Allen
*Tabuada em C
*/
int numero,resposta;
int contador=0;

int main(int argc, char *argv[]) {
	do
	{
	system("CLS");
	printf("Tabuada\n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d",&numero);
	for(contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n",numero,contador,  numero*contador);
	}
	printf("\n1- Novo Calculo\n");
	printf("2 -Sair\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&resposta);
}while(resposta != 2);
	system("PAUSE");
	return 0;
}
