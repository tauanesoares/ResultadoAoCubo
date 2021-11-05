/*Implemente um sistema utilizando FUNÇÃO que leia um valor
e apresente para o usuário o valor do CUBO do valor digitado.
compartilhar trello utnairo@gmail.com
*/

#include <stdio.h>

///
void CUBO(int a){
	int resultado;
	resultado = (a*a*a);
	printf(" O valor ao cubo do valor digitado eh: %d", resultado);
	
}

int main()
{
	int valor01;
	int resultado;
	
	printf("Digite um valor: \n");
	scanf("%d", &valor01);
	CUBO(valor01);
	
	
	
	
return 0;
}
