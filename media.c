#include <stdio.h>
#include <stdlib.h>

/*
 * C�lculo da m�dia
 * Desenvolvido por Barry Allen
 * Sob a licen�a GPL (Licen�a padr�o para software livre)
 * 04/05/2016
 */

int main(int argc, char *argv[])
{
	// a linha abaixo declara vari�veis num�ricas reais(casas decimais)
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota1: ");
	//leia e armazene na vari�vel nota1
	//&nota1 -> particularidade da linguagem C para armazenar valores na vari�vel
	scanf("%f",&nota1);
	printf("Digite a nota2: ");
	scanf("%f",&nota2);
	//processamento
	media=(nota1+nota2)/2;
	//sa�da
	//a v�rgula concatena(junta) um texto com o conte�do da vari�vel media
	//%.1f -> arredondamento para uma casa decimal
	//%.2f -> arredondamento para duas casas decimais
	printf("Resultado: %.1f\n",media);
	//l�gica para determinar se o aluno est� aprovado ou reprovado
	if(media < 2)
	{
		printf("Aluno REPROVADO\n");
	}
	else if (media >= 6)
	{
		printf("Aluno APROVADO\n");
	}
	else
	{
		printf("Aluno RECUPERACAO\n");
	}
	system("PAUSE");
	return 0;
}










