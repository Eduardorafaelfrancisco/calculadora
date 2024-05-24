#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



float val1(){
	float valor;
	printf("\nDigite o primeiro valor");
	scanf("%f", &valor);
return valor;
}

char opera(){
	char operacao;
	printf("\nDigite uma operacao");
	scanf("%c",&operacao);
	return operacao;
}

void conta(float valor1, char operacao){
	float valor2, result;
	switch(operacao){
		case('+'):
		printf("\nDigite o segundo valor");
		scanf("%f", &valor2);
		result = valor1 + valor2;
		printf("\no valor da soma é:%.2f\n", result);
		break;

		case('-'):
		printf("\nDigite o segundo valor");
		scanf("%f", &valor2);
		result = valor1 - valor2;
		printf("\no valor da subtração é:%.2f\n", result);
		break;

		case('*'):
		printf("\nDigite o segundo valor");
		scanf("%f", &valor2);
		result = valor1 * valor2;
		printf("\no valor da multiplicação é:%.2f", result);
		break;

		case('/'):
		do{
		printf("\nDigite o segundo valor");
		scanf("%f", &valor2);
		}while (valor2 == 0);
		result = valor1 / valor2;
		printf("\no valor da divisão é:%.2f", result);
	}
}

void main(){
	printf("\nBoa noite\n");
	conta(val1(),opera());
}
